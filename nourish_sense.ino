// Arduino code for MQ4 sensor
int mq4Pin = A0;
void setup() {
  Serial.begin(9600);
}
void loop() {
  int sensorValue = analogRead(mq4Pin);
  Serial.println(sensorValue);
  delay(1000);
}