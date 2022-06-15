#define LDR A0  // composante photorésistance sur la pin A1
#define LED D0   // composante diode électroluminescente sur la pin 9

int value;
 
void setup() {
   // initialise la communication avec le PC
   Serial.begin(9600);

   // initialise les broches
   pinMode(LED, OUTPUT);
   pinMode(LDR, INPUT);
}
 
void loop() {
   // mesure la tension sur la broche A1
   value = analogRead(LDR);
   Serial.println(value);

   // allume la LED
   if (value<700) digitalWrite(LED, HIGH);

   // désactiver la LED
   if (value>700) digitalWrite(LED, LOW);

   delay(200);
}
