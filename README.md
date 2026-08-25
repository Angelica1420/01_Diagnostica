# Evaluación Diagnóstica: Soporte Técnico 🔌🤖
### 3° Bachillerato Técnico (2026–2027)

> [!INFO] Repositorio de Aprendizaje & Starter Kit
> **Institución:** Unidad Educativa Técnico Salesiano (UETS)  
> **Organización:** [UETS-Soporte-Tecnico](https://github.com/UETS-Soporte-Tecnico)  
> **Docente Elaborador:** Ing. Milton Velásquez  
> **Ponderación Evaluativa:** Metodología Dual MIT (50% Simulación Wokwi / 50% Video Screencast)

---

## 🌟 Diapositivas Socráticas en Vivo

Puedes acceder a la presentación interactiva proyectable directamente desde tu navegador:

👉 **[Ver Presentación Web 16:9 en Vivo](https://uets-soporte-tecnico.github.io/01_Diagnostica/)** *(o abre `index.html` localmente)*.

- ⌨ **Navegación:** Teclas `[←]` `[→]` o `[Espacio]`.
- 📺 **Pantalla Completa:** Presiona `[F]`.
- 🧠 **Preguntas Socráticas:** Descubre el "por qué" de las conexiones antes de copiar el código.

---

## 🎯 ¿Qué tienes que hacer en este Starter Kit?

Este repositorio contiene los **diagramas de Wokwi** y los esqueletos de código para la Evaluación Diagnóstica. Deberás completar el código en donde dice `// TODO:`.

```text
🥊 Bloque 1: Control de LEDs y Botón Pull-Down (bloque_1/src/bloque_1.ino)
🥊 Bloque 2: Lectura de Potenciómetro y ADC (bloque_2/src/bloque_2.ino)
```

---

## 🚀 Guía de Git y Flujo de Trabajo (Fork & Pull Request)

### Paso 1: Hacer Fork del Repositorio
1. En esta página de GitHub (arriba a la derecha), haz clic en el botón 🍴 **"Fork"**.
2. Selecciona tu cuenta personal y haz clic en **"Create fork"**.

### Paso 2: Trabajar en Wokwi
1. Ve a [wokwi.com](https://wokwi.com/) y crea un nuevo proyecto de ESP32, o sube los archivos `diagram.json` y `*.ino` de tu repositorio.
2. Completa los retos programando la lógica faltante en los archivos `.ino`.

### Paso 3: Subir tu Código Resuelto
Cuando tus simulaciones funcionen perfectamente, sube tus cambios a GitHub (puedes usar GitHub Desktop, la terminal o la propia web de GitHub):
```bash
git add .
git commit -m "feat: resolver bloque 1 y bloque 2"
git push origin main
```

### Paso 4: Abrir tu Pull Request (PR)
1. Entra a tu Fork en GitHub y haz clic en **"Contribute" ➔ "Open pull request"**.
2. Ponle de título: `Entrega Diagnóstica - Tu Nombre y Apellido`.
3. Pega el **enlace de tu video Screencast** en la descripción.

---

## 📹 Grabación del Screencast (Bloque B · 50%)

Graba un video de máximo **3:00 minutos**:
1. **0:00 - 0:30:** Muestra tu rostro en cámara y preséntate.
2. **0:30 - 1:30:** Muestra Wokwi corriendo el **Bloque 1**. Explica **qué es un estado flotante** y cómo el Pull-Down físico lo resuelve.
3. **1:30 - 3:00:** Muestra Wokwi corriendo el **Bloque 2**. Explica **por qué divides para 4095.0** para obtener el voltaje real de 3.3V.

¡Mucho éxito!
