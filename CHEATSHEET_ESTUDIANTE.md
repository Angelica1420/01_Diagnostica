# ⚡ Cheatsheet del Estudiante: ESP32 & Flujo Git (UETS)

---

## 1. Convención de Commits Semánticos (Commitlint)
Para que el robot evaluador de GitHub Actions apruebe tu entrega con el **Check Verde ✅**, tus mensajes de commit deben respetar estrictamente este formato:

```bash
git commit -m "tipo(alcance): descripcion en minusculas"
```

| Prefijo | Significado | Ejemplo Práctico de Aula |
| :--- | :--- | :--- |
| `feat:` | Nueva funcionalidad o bloque resuelto | `git commit -m "feat(bloque1): implementar semaforo con pulsador"` |
| `fix:` | Corrección de error en fórmula o pin | `git commit -m "fix(adc): usar divisor 4095.0 con decimal"` |
| `docs:` | Enlaces de screencast o documentación | `git commit -m "docs(readme): anadir enlace al video screencast"` |
| `refactor:` | Orden y limpieza de código sin cambiar lógica | `git commit -m "refactor: simplificar condicionales if-else"` |

---

## 2. Pines GPIO Digitales: ¿Manos u Ojos? (Entradas y Salidas)

El ESP32 es un cerebro electrónico dentro de un chip. Para interactuar con el mundo físico, tú debes indicarle la función de cada pin en `setup()`:

* **Las Manos (`OUTPUT`):** El microcontrolador empuja corriente hacia afuera para actuar en el mundo (encender un LED, activar un relé o mover un motor).
* **Los Ojos / Oídos (`INPUT`):** El microcontrolador siente voltaje que viene desde afuera (detectar si alguien aplastó un botón o si un sensor se activó).

```cpp
// 1. En setup(): Le dices al ESP32 si el pin es una Mano o un Ojo
pinMode(PIN_OBJETIVO, OUTPUT); // MANO: Entrega 3.3V (para LEDs, zumbadores)
pinMode(PIN_OBJETIVO, INPUT);  // OJO: Siente voltaje externo (pulsadores)

// 2. En loop(): Operaciones digitales binarias (Todo o Nada)
digitalWrite(PIN_OBJETIVO, HIGH);       // Saca 3.3V por el pin (enciende)
digitalWrite(PIN_OBJETIVO, LOW);        // Apaga el pin conectándolo a 0V (GND)
int estado = digitalRead(PIN_OBJETIVO); // Lee el ojo: retorna 1 (HIGH) o 0 (LOW)
```

> [!TIP]
> **Preguntas Guía de Taller:**
> - Si quieres encender el LED verde, ¿qué orden debe darle tu código a su "mano": `HIGH` (3.3V) o `LOW` (0V)?
> - Cuando el pulsador no está presionado, ¿qué lee el "ojo" en `digitalRead()` y qué camino de tu `if-else` debe ejecutarse para que el semáforo esté en verde?

---

## 3. El Misterio del "Botón Loco": La Antena Fantasma y la Correa del Perro

* **El Problema del Estado Flotante:**  
  Si conectas un botón directo al pin sin resistencia, cuando el botón está suelto el pin queda en el aire. Como el ESP32 es hipersensible, el pin se comporta como una **antena de radio** que capta la estática de tu ropa y el WiFi. El LED parpadeará solo como si hubiera un fantasma.
* **La Solución: La Correa del Perro (Resistencia Pull-Down de 10 kΩ a GND):**  
  * Conectamos una resistencia de **10 kΩ entre el pin y Tierra (GND)**.
  * **En reposo (botón suelto):** La resistencia es como la correa que mantiene al perro amarradito y quieto en el suelo: fuerza un nivel lógico estable de **0 V (`LOW`)**.
  * **Al presionar el botón (conectado a 3.3V):** La corriente de 3.3V entra con mucha más fuerza que la suave resistencia de 10k, levantando el pin limpiamente a **3.3 V (`HIGH`)**.

> [!IMPORTANT]
> **Pregunta Clave:**  
> ¿Por qué se llama **Pull-Down**? Porque su trabajo es "jalar hacia abajo" (a 0V) el voltaje del pin para que nunca quede flotando en el aire.

---

## 4. El Potenciómetro y el ADC: La Regla de 4096 Rayitas (12 Bits)

Para leer sensores variables (como perillas de volumen o temperatura), el ESP32 cuenta con un convertidor analógico a digital (**ADC**):

* **Arduino UNO vs ESP32:**  
  * El Arduino UNO antiguo tenía una regla escolar de **1024 rayitas** (10 bits = $2^{10}$).
  * El ESP32 tiene un instrumento de alta precisión con **4096 rayitas** (12 bits = $2^{12}$, del `0` al `4095`).
* **La Regla de Tres de la Tienda:**  
  * Perilla girada al mínimo (0V) $\rightarrow$ el ESP32 lee **0 rayitas**.
  * Perilla girada al máximo (3.3V) $\rightarrow$ el ESP32 lee **4095 rayitas**.
  * Si la perilla está exactamente en el centro (1.65V)... ¿cuántas rayitas lee el ESP32? ¡La mitad (**2047**)!

$$\frac{\text{Voltaje Real}}{3.3\text{ V}} = \frac{\text{Lectura ADC}}{4095}$$

Despejando el voltaje en tu libreta:
$$\text{Voltaje Real} = \frac{\text{Lectura ADC} \times 3.3}{4095}$$

### ⚠️ ¡Cuidado con el Cero Absoluto en tu Código de Arduino! (La trampa común)
Si en tu código escribes:
```cpp
float voltaje = lectura * (3.3 / 4095); // ❌ ¡ERROR! Siempre dará 0.00 V
```
En el código de Arduino, si divides números enteros sin decimales (`3 / 4095`), el procesador dice: *"el 4095 no cabe en el 3, así que el resultado da 0"*, y $0 \times \text{lectura} = 0$.

👉 **El secreto:** Escribe siempre la constante con punto decimal: **`4095.0`** (o `3.3 / 4095.0`). Así obligas a la computadora a calcular con todos los decimales reales.

---

## 5. Atajos Rápidos en VS Code & Wokwi
1. **Espacio de Trabajo Oficial:** Abre siempre **`01_Diagnostica.code-workspace`** en VS Code para que PlatformIO reconozca ambos bloques por separado.
2. **Compilar con la Hormiga 🐜:** En la barra izquierda, haz clic en el icono de PlatformIO ➔ `PROJECT TASKS` ➔ Despliega `🟢 Bloque 1` o `🟡 Bloque 2` ➔ haz clic en **`Build`**.
3. **Simular en Wokwi:** Abre `diagram.json` del bloque y pulsa la tecla `F1` ➔ escribe **`Wokwi: Start Simulator`**.
