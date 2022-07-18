int rPin = 7;
int gPin = 5
int bPin = 2

void setup() {
  // put your setup code here, to run once:
pinMode (rPin, OUTPUT);
pinMode (gPin, OUTPUT);
pinMode (bPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite (rPin, 255);
analogWrite (gPin, 0);
analogWrite (bPin, 0);
delay (1000);
analogWrite (rPin, 0);
analogWrite (gPin, 255);
analogWrite (bPin, 0);
delay (1000);
analogWrite (rPin, 0);
analogWrite (gPin, 0);
analogWrite (bPin, 255);
delay (1000);

}