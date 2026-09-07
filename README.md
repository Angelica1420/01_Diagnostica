# Evaluación Diagnóstica: Soporte Técnico
### 3° Bachillerato Técnico (2026–2027)

> [!INFO] Repositorio de Aprendizaje & Starter Kit
> **Institución:** Unidad Educativa Técnico Salesiano (UETS)  
> **Organización:** [UETS-Soporte-Tecnico](https://github.com/UETS-Soporte-Tecnico)  
> **Docente Elaborador:** Ing. Milton Velásquez  
> **Ponderación Evaluativa:** Metodología Dual MIT (50% Simulación Wokwi / 50% Video Screencast)

---

## 📺 Guía Maestra Técnica en Vivo (Cloudflare Edge)

[![Ver Guía Maestra en Vivo](https://img.shields.io/badge/Guía_Técnica-Ver_en_Línea-E07A5F?style=for-the-badge&logo=cloudflare)](https://uets-st-portal.vgmiltonisaac.workers.dev/01-diagnostica/)

👉 **[Abrir Guía Maestra en el Portal Oficial (Cloudflare Edge)](https://uets-st-portal.vgmiltonisaac.workers.dev/01-diagnostica/)**  
👉 **[Ver Portal Curricular de Soporte Técnico](https://uets-st-portal.vgmiltonisaac.workers.dev/)**

- 📖 **Formato:** Blog Técnico interactivo con scroll continuo e índice TOC lateral.
- ⚡ **Latencia Edge:** Servido globalmente sin sobrecargar tu repositorio con archivos pesados.
- 💡 **Preguntas de Pizarra & Terminales:** Salidas esperadas en tiempo real para el Serial Monitor a 115200 bps.

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

> [!TIP]
> **Abre el archivo `01_Diagnostica.code-workspace` en VS Code:**  
> Ve a **Archivo ➔ Abrir espacio de trabajo desde archivo...** y selecciona `01_Diagnostica.code-workspace` (o haz doble clic sobre él en Windows). Esto cargará automáticamente ambos bloques como proyectos independientes en PlatformIO.

- **Para compilar el Bloque 1:** En la barra lateral izquierda de VS Code, haz clic en el icono de **PlatformIO (la hormiga 🐜)** ➔ despliega **PROJECT TASKS** ➔ **🟢 Bloque 1: GPIO Semáforo** ➔ **esp32** ➔ haz clic en **Build**.
- **Para compilar el Bloque 2:** En el mismo panel, despliega **🟡 Bloque 2: ADC Potenciómetro** ➔ **esp32** ➔ haz clic en **Build**.
- *Alternativa con la barra inferior:* En la barra azul inferior de VS Code, haz clic sobre el nombre del proyecto activo (`Project: bloque_1` o `bloque_2`) para cambiarlo y pulsa el botón del visto `✓ (PlatformIO: Build)`.

### 3. Ejecutar la Simulación en VS Code con Wokwi
- Abre el archivo `diagram.json` del bloque que deseas simular (`bloque_1/diagram.json` o `bloque_2/diagram.json`).
- Presiona `F1`, escribe `Wokwi: Start Simulator` y pulsa Enter (o pulsa el botón Play dentro del diagrama).

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
