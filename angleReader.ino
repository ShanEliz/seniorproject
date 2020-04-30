// Senior Project Angle Reader
// Shannon Mellin
// 5/1/2020
// 
// Parts needed: 12 red LEDs, 12 150ohm resistors, Arduino Nano, 
//               Magnetic Angle Sensor (nve.com AG935-07E)

int analogPin0 = 0; // sin input
int analogPin1 = 1; // cos input

// list of LED outputs
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11= 11;
int led12 = 12;
int led13 = 13;

void setup() {

  // recognize possible outputs
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);
  pinMode(led12, OUTPUT);
  pinMode(led13, OUTPUT);

}

void loop() {
  
  int sine = analogRead(analogPin0); // raw sin read
  int cosine = analogRead(analogPin1); // raw cos read


  // The following if statements identify which LED to illuminate
  // based on the input read from the angle sensor.

  if (sine < 419 && cosine > 494 && cosine < 569) {
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 419 && sine < 456 && cosine > 531 && cosine < 606) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 456 && sine < 494 && cosine > 569 && cosine < 620) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 494 && sine < 531 && cosine > 600) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 531 && sine < 580 && cosine > 569 && cosine < 620) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 575 && sine < 616 && cosine > 525 && cosine < 600) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 600 && cosine > 480 && cosine < 560) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, HIGH);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 550 && sine < 618 && cosine > 440 && cosine < 530) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, HIGH);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 528 && sine < 600 && cosine > 407 && cosine < 500) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, HIGH);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 494 && sine < 550 && cosine < 420) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, HIGH);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }

  else if (sine > 430 && sine < 500 && cosine > 410 && cosine < 490) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, LOW);
  }

  else if (sine > 410 && sine < 440 && cosine > 419 && cosine < 530) {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, HIGH);
  }
  
  else {
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led9, LOW);
    digitalWrite(led10, LOW);
    digitalWrite(led11, LOW);
    digitalWrite(led12, LOW);
    digitalWrite(led13, LOW);
  }
  
}
