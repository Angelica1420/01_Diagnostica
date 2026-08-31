const int pinLedRojo = 23;
const int pinLedVerde = 22;
const int pinPulsador = 4;

void setup() {
  Serial.begin(115200);
  // TODO: Configurar los pines de los LEDs como OUTPUT
  pinMode(23, OUTPUT); // Pin 23 (LED Rojo) enviará voltaje (3.3V o 0V)
  pinMode(22, OUTPUT); // Pin 22 (LED Verde) enviará voltaje
  pinMode(4, INPUT);   // Pin 4 (Pulsador) leerá voltaje digital
}
  // TODO: Configurar el pin del pulsador como INPUT
  


void loop() {
  // TODO: Leer el estado del pulsador usando digitalRead
  int estadoPulsador =  digitalRead(4); // Cambia esto
  
  if (estadoPulsador == HIGH) {
    // TODO: Encender LED Rojo y apagar LED Verde
    digitalWrite(23, HIGH);   
    digitalWrite(22, LOW); 
    Serial.println("Pulsador PRESIONADO: LED Rojo ENCENDIDO");
  } else {
    // TODO: Apagar LED Rojo y encender LED Verde
    digitalWrite(23, LOW);     
    digitalWrite(22, HIGH);  
    Serial.println("Pulsador SOLTADO: LED Verde ENCENDIDO");
  }
  
  delay(100);
}
