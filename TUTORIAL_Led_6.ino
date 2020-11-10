/*
   TUTORIAL LED PWM PADA ARDUINO
   PENGATURAN VIA POTENSIO
   D4 -> Led Merah
   D5 -> Led Hijau (pin PWM)
   D6 -> Led Biru (pin PWM)
   D7 -> Led Kuning 


*/

#define pinLed 6 //led biru pada D6 yang merupakan pin PWM
#define pinPot A0

void setup() {
  pinMode(pinLed, OUTPUT); //set menjadi output
  pinMode(pinPot, INPUT); //set sebagai input
}

void loop() {
  int a = analogRead(pinPot);
  int b = map(a,0,1023,0,255); //mapping nilai analog potensio ke nilai analog pwm
  analogWrite(pinLed, b);
  delay(5);
}
