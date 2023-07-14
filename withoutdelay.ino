int solenoid1 = 11;
int solenoid2 = 10;
int solenoid3 = 6;
int solenoid4 = 5;

void setup() {
  pinMode(solenoid1,OUTPUT);
  pinMode(solenoid2,OUTPUT);
  pinMode(solenoid3,OUTPUT);
  pinMode(solenoid4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 String myString = "Total time taken: ";
 if (digitalRead(13) == LOW) {
  float randomValue = random(100, 399) / 100.0;
  for (int i=0; i<=10; i++){
    Serial.println(randomValue);    
  }
  for (int j=0; j<=10; j++){
    Serial.println(0); 
  }
  if (randomValue >= 3.0) {
    
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid2 , LOW);
    
    digitalWrite(solenoid3 , LOW);
    
    float remainingPercentage = (randomValue - int(randomValue)) * (100.0);
    
    int solenoid4Time = remainingPercentage * (10); 
    
    digitalWrite(solenoid4 , LOW);
    Serial.println("No of solenoids in use:4");
    Serial.println (myString + randomValue);
    delay(solenoid4Time);
    digitalWrite(solenoid4 , HIGH);
    delay(solenoid4Time);
    digitalWrite(solenoid1 , HIGH);
    
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    
  } else if (randomValue >= 2.0) {
    
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid2 , LOW);
    
    digitalWrite(solenoid4 , HIGH);
    
    float remainingPercentage = (randomValue - int(randomValue)) * (100.0);
    
    int solenoid3Time = remainingPercentage * (10); 
    
    digitalWrite(solenoid3 , LOW);
    Serial.println("No of solenoids in use:3");
    Serial.println (myString + randomValue);
    delay(solenoid3Time);
    digitalWrite(solenoid3 , HIGH);
    delay(solenoid3Time);
    digitalWrite(solenoid1 , HIGH);
    
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    

  } else if (randomValue >= 1.00) {
    
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    

    float remainingPercentage = (randomValue - int(randomValue)) * (100.0);
    
    int solenoid2Time = remainingPercentage * (10); 
    
    digitalWrite(solenoid2 , LOW);
    Serial.println("No of solenoids in use:2");
    Serial.println (myString + randomValue);
    delay(solenoid2Time);
    digitalWrite(solenoid2 , HIGH);
    delay(solenoid2Time);
    digitalWrite(solenoid1 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    

  } else if (randomValue >= 0.00) {
    float remainingPercentage = (randomValue - int(randomValue)) * (100.0);
    
    int solenoid1Time = remainingPercentage * (10);
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    
    digitalWrite(solenoid1 , LOW);
    Serial.println("No of solenoids in use:1");
    Serial.println (myString + randomValue);
    delay(solenoid1Time);
    digitalWrite(solenoid1 , HIGH);
    delay(solenoid1Time);    
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    
    
  } else {
      
    digitalWrite(solenoid1 , HIGH);
    
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    Serial.println("No solenoid open");
    Serial.println (myString + randomValue);    
    
    
  }
 } else {


  digitalWrite(solenoid1 , HIGH);
  
  digitalWrite(solenoid2 , HIGH);
  
  digitalWrite(solenoid3 , HIGH);
  
  digitalWrite(solenoid4 , HIGH);
  Serial.println("OFF,NOSIGNAL");
  
  
 }


}
