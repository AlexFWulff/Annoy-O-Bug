//Code produced by Alex Wulff: http://www.AlexWulff.com

#define BUZZ      0
#define LED       1
#define INITIAL   5000
//10,000 ms yields a total sequence time of 46.5 Seconds
//20,000 ms yields a total sequence time of 91.5 Seconds
//30,000 ms yields a total sequence time of 136.5 Seconds
//You get the pattern. Each 10 seconds yields another 45
//seconds of total time on the sequence.

void setup() {
  // put your setup code here, to run once:
  pinMode(BUZZ, OUTPUT);
  pinMode(LED, OUTPUT);

  //Flash the light to make sure the device is working
  for (int i = 0; i < 5; i++) {
    digitalWrite(LED, HIGH);
    delay(200);
    digitalWrite(LED, LOW);
    delay(200);
  }
}

void loop() {
  for (int i = 1; i < 50; i++) {
    digitalWrite(BUZZ, HIGH);
    digitalWrite(LED, HIGH);
    delay(30);
    digitalWrite(0, LOW);
    digitalWrite(LED, LOW);
    delay(INITIAL/i);
  }
}