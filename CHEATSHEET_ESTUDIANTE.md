# 🛠️ Cheatsheet del Estudiante: ESP32 Básico

## 1. Pines GPIO Digitales (Entrada y Salida)
```cpp
void setup() {
  pinMode(23, OUTPUT); // Pin 23 enviará voltaje
  pinMode(4, INPUT);   // Pin 4 leerá voltaje
}

void loop() {
  digitalWrite(23, HIGH);         // Envía 3.3V (Enciende LED)
  int estado = digitalRead(4);    // Lee si hay 3.3V (HIGH) o 0V (LOW)
}
```

## 2. Resistencia Pull-Down
Si conectas un botón directo al ESP32 sin resistencia, el pin queda en **"estado flotante"** (capta ruido como una antena).
Para solucionarlo, conectamos una resistencia de 10kΩ a Tierra (GND). Así el pin siempre leerá `LOW` (0V) por defecto, y solo leerá `HIGH` cuando presiones el botón que trae los 3.3V.

## 3. ADC (Convertidor Analógico-Digital)
El ESP32 tiene un ADC de **12 bits**.
- 2 elevado a la 12 = 4096 posibles valores (del 0 al 4095).
- 0V se lee como `0`.
- 3.3V se lee como `4095`.

**Fórmula de conversión a Voltaje:**
```cpp
int lecturaADC = analogRead(34);
float voltaje = lecturaADC * (3.3 / 4095.0);
```
