//Code produced by Alex Wulff: http://www.AlexWulff.com

#define BUZZ      0
#define LED       1

//Lower bound: 5 seconds
//Upper bound: 10 seconds
#define LOWER   5000
#define UPPER  10000

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZ, OUTPUT);
  pinMode(LED, OUTPUT);

  //Seed the random function with the value of an
  //unconnected analog pin
  randomSeed(analogRead(1));

  //Flash the light to make sure the device is working
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
}

void loop() {
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(0, LOW);
    digitalWrite(LED, LOW);
    delay(random(LOWER, UPPER));
}
