int potPin = A1;
int gPin = 6;
int hPin = 5;
int jPin = 9;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
pinMode(potPin, INPUT);
pinMode(gPin, OUTPUT);
pinMode(hPin, OUTPUT);
pinMode(jPin,OUTPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead(potPin);
LEDVal = (5./1023.)*potVal;
analogWrite(gPin,LEDVal);
analogWrite(hPin,LEDVal);
analogWrite(jPin,LEDVal);
Serial.println(LEDVal);
delay(250);
}
