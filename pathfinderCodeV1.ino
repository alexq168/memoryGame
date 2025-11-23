int button1 = D0;
int button2 = D1;
int button3 = D2;

int LED1 = D3;
int LED2 = D4;
int LED3 = D5;

void setup() {
    pinMode(button1, INPUT_PULLUP);

pinMode(button2, INPUT_PULLUP);

pinMode(button3, INPUT_PULLUP);


pinMode(LED1, OUTPUT);

pinMode(LED2, OUTPUT);

pinMode(LED3, OUTPUT);

   int memNum1 = random(1, 3);
  int memNum2 = random(1, 3);
  int memNum3 = random(1, 3);
  int memNum4 = random(1, 3);
  int memNum5 = random(1, 3);

long startTime = millis();
}

void loop(){
  
if (memNum1 == 1){
  digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
} else {
  if (memNum1 == 2){
    digitalWrite(LED2 HIGH);
      delay (500);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED3, HIGH);
      delay (500);
    digitalWrite(LED3, LOW);
  }
}

delay (500);

if (memNum2 == 1){
  digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
} else {
  if (memNum2 == 2){
    digitalWrite(LED2 HIGH);
      delay (500);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED3, HIGH);
      delay (500);
    digitalWrite(LED3, LOW);
  }
}

delay (500);

if (memNum3 == 1){
  digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
} else {
  if (memNum3 == 2){
    digitalWrite(LED2 HIGH);
      delay (500);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED3, HIGH);
      delay (500);
    digitalWrite(LED3, LOW);
  }
}

delay (500);

if (memNum4 == 1){
  digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
} else {
  if (memNum4 == 2){
    digitalWrite(LED2 HIGH);
      delay (500);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED3, HIGH);
      delay (500);
    digitalWrite(LED3, LOW);
  }
}

delay (500);

if (memNum5 == 1){
  digitalWrite(LED1, HIGH);
  delay (500);
  digitalWrite(LED1, LOW);
} else {
  if (memNum5 == 2){
    digitalWrite(LED2 HIGH);
      delay (500);
    digitalWrite(LED2, LOW);
  } else {
    digitalWrite(LED3, HIGH);
      delay (500);
    digitalWrite(LED3, LOW);
  }
}

delay (500);
  
}