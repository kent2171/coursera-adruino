#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 3000;
int green_blink = 500;
int yellow_on = 1000;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  // highlight red
  digitalWrite(RED_PIN, HIGH);
  // waiting till red is on
  delay(red_on);

  // highlight yellow simultaneously with red
  digitalWrite(YELLOW_PIN, HIGH);
  // waiting till red and yellow is on
  delay(red_yellow_on);

  // switching off red and yellow
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);

  // turn on green light
  digitalWrite(GREEN_PIN, HIGH);
  // waiting tell green is on
  delay(green_on);
  // swith of green
  digitalWrite(GREEN_PIN, LOW);
  
  // lastly green is blinking 3 times
  for(int i=0; i < 3; i = i+1) {
    
    delay(green_blink);
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blink);
    digitalWrite(GREEN_PIN, LOW);
  }

  // finally fires yellow 
  digitalWrite(YELLOW_PIN, HIGH);
  delay(yellow_on);
  digitalWrite(YELLOW_PIN, LOW);
}
