int relay1 = 11;
int relay2 = 3;
int relay3 = 4;
int relay4 = 5;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int delayTime1 = random(1000,5000);
  int delayTime2 = random(1000,5000);
  int delayTime3 = random(1000,5000);
  int delayTime4 = random(1000,5000);
  
  digitalWrite(relay1, HIGH);
  delay(delayTime1);
  Serial.println("TIME 1 ON");
  digitalWrite(relay1, LOW);
  delay(delayTime1);
  Serial.println("TIME 1 OFF");
  
  
  digitalWrite(relay2, HIGH);
  delay(delayTime2);
  Serial.println("TIME 2 ON");
  digitalWrite(relay2, LOW);
  delay(delayTime2);
  Serial.println("TIME 2 OFF");
  
  
  digitalWrite(relay3, HIGH);
  delay(delayTime3);
  Serial.println("TIME 3 ON");
  digitalWrite(relay3, LOW);
  delay(delayTime3);
  Serial.println("TIME 3 OFF");
  
  digitalWrite(relay4, HIGH);
  delay(delayTime4);
  Serial.println("TIME 4 ON");
  digitalWrite(relay4, LOW);
  delay(delayTime4); 
  Serial.println("TIME 4 OFF");
  
}
