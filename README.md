# Evaluación Diagnóstica: Soporte Técnico
### 3° Bachillerato Técnico (2026–2027)

> [!INFO] Repositorio de Aprendizaje & Starter Kit
> **Institución:** Unidad Educativa Técnico Salesiano (UETS)  
> **Organización:** [UETS-Soporte-Tecnico](https://github.com/UETS-Soporte-Tecnico)  
> **Docente Elaborador:** Ing. Milton Velásquez  
> **Ponderación Evaluativa:** Metodología Dual MIT (50% Simulación Wokwi / 50% Video Screencast)

---

## Diapositivas Socráticas e Interactivas en Vivo

Puedes acceder a la presentación oficial proyectable directamente desde tu navegador:

[Ver Presentación Web 16:9 en Vivo](https://uets-soporte-tecnico.github.io/01_Diagnostica/) *(o abre `index.html` localmente en tu navegador)*.

- **Navegación:** Teclas `[←]` `[→]` o `[Espacio]`.
- **Pantalla Completa:** Presiona `[F]`.
- **Preguntas Socráticas:** Descubre el "por qué" de las conexiones (estado flotante, ADC de 12 bits) antes de programar.

---

## Qué tienes que hacer en este Starter Kit

Este repositorio contiene los **diagramas de Wokwi** y los esqueletos de código para la Evaluación Diagnóstica. Deberás completar el código en donde dice `// TODO:`.

```text
Bloque 1: Control de LEDs y Botón Pull-Down (bloque_1/src/bloque_1.ino)
Bloque 2: Lectura de Potenciómetro y ADC 12 bits (bloque_2/src/bloque_2.ino)
```

---

## Flujo de Trabajo Técnico (Wokwi + PlatformIO + VS Code)

### 1. Diseñar el Circuito en Wokwi
- Puedes armar o inspeccionar el circuito en [wokwi.com](https://wokwi.com/) o usar los archivos `diagram.json` ya preparados en las carpetas `bloque_1/` y `bloque_2/`.
- Si modificas el circuito en Wokwi web, copia el contenido de la pestaña `diagram.json` y reemplázalo en tu carpeta local de VS Code.

### 2. Programar y Compilar en VS Code con PlatformIO
- Abre la carpeta de este repositorio en VS Code.
- Abre `bloque_1/src/bloque_1.ino` o `bloque_2/src/bloque_2.ino`.
- Completa los bloques marcados con `// TODO:`.
- Compila tu código con el botón **PlatformIO: Build** en la barra de estado inferior (o con el atajo `Ctrl + Alt + B`).

### 3. Ejecutar la Simulación en VS Code
- Gracias a `wokwi.toml`, PlatformIO inyecta automáticamente el binario `.pio/build/esp32/firmware.bin` en la extensión de Wokwi.
- Presiona `F1`, escribe `Wokwi: Start Simulator` y pulsa Enter.

---

## Flujo de Git Profesional (Fork, Commits Semánticos & Pull Request)

### Paso 1: Hacer Fork del Repositorio
1. En esta página de GitHub (arriba a la derecha), haz clic en el botón **"Fork"**.
2. Selecciona tu cuenta personal y haz clic en **"Create fork"**.
3. Clona tu propio fork a tu computadora:
   ```bash
   git clone https://github.com/TU-USUARIO/01_Diagnostica.git
   ```

### Paso 2: Realizar Commits Semánticos Obligatorios
El robot de integración continua (CI) valida que todos los commits sigan la convención internacional `Conventional Commits`. Usa siempre los prefijos correctos:

| Tipo de Commit | Cuándo Usarlo | Ejemplo |
| :--- | :--- | :--- |
| `feat:` | Cuando completas la lógica de un bloque nuevo | `git commit -m "feat(bloque1): configurar pull-down y leds"` |
| `fix:` | Cuando corriges un pin o error matemático | `git commit -m "fix(adc): corregir division para 4095.0"` |
| `docs:` | Cuando agregas el link del video al README | `git commit -m "docs: agregar enlace de video screencast"` |

> [!CAUTION]
> **No uses mensajes genéricos** como `git commit -m "cambios"` o `git commit -m "listo"`, ya que el CI marcará fallo y no podrás calificar.

### Paso 3: Subir tu Código Resuelto
```bash
git add .
git commit -m "feat(diagnostica): resolver bloque 1 y bloque 2"
git push origin main
```

### Paso 4: Abrir tu Pull Request (PR)
1. Entra a tu Fork en GitHub y haz clic en **"Contribute" ➔ "Open pull request"**.
2. **Título obligatorio:** `Entrega Diagnóstica - Nombre y Apellido`.
3. Pega el **enlace público de tu video Screencast** (Google Drive / YouTube) en la descripción del Pull Request.
4. Verifica que el robot de GitHub Actions muestre el **Check Verde**.

---

## Grabación del Screencast (Bloque B · 50% de la Nota)

Graba un video de máximo **3:00 minutos** demostrando tus simulaciones:
1. **0:00 - 0:30 (Cámara y Rostro):** Preséntate indicando tu nombre, curso y paralelo.
2. **0:30 - 1:30 (Bloque 1):** Muestra Wokwi corriendo el Bloque 1. Explica **qué es un estado flotante** y cómo la resistencia Pull-Down de 10k resuelve el problema.
3. **1:30 - 3:00 (Bloque 2):** Muestra Wokwi corriendo el Bloque 2. Explica **por qué el ADC es de 12 bits (0 a 4095)** y por qué divides para `4095.0` para calcular el voltaje real de 3.3V.

¡Mucho éxito en el inicio de este nuevo año lectivo 2026-2027!
