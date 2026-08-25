const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
  Serial.begin(115200);
  // TODO: Configurar los pines de los LEDs como OUTPUT
  
  // TODO: Configurar el pin del pulsador como INPUT
  
}

void loop() {
  // TODO: Leer el estado del pulsador usando digitalRead
  int estadoPulsador = 0; // Cambia esto
  
  if (estadoPulsador == HIGH) {
    // TODO: Encender LED Rojo y apagar LED Verde
    
    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    // TODO: Apagar LED Rojo y encender LED Verde
    
    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }
  
  delay(100);
}
