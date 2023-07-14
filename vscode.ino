int solenoid1 = 11;
int solenoid2 = 10;
int solenoid3 = 6;
int solenoid4 = 5;
float randomValue;

void setup() {
  pinMode(solenoid1,OUTPUT);
  digitalWrite(solenoid1 , HIGH);
  pinMode(solenoid2,OUTPUT);
  digitalWrite(solenoid2 , HIGH);
  pinMode(solenoid3,OUTPUT);
  digitalWrite(solenoid3 , HIGH);
  pinMode(solenoid4,OUTPUT);
  digitalWrite(solenoid4 , HIGH);
  Serial.begin(9600);
}
void loop() {
 String myString = "Total time taken: ";
  
 if (Serial.available() > 0)
 {   
  {
  float randomValue = Serial.parseFloat() / 100.0;
  { 
  
  String s = String(randomValue);
  Serial.println("Enter a number:");
   
  
   
  /*for (int i=0; i<=10; i++){
    Serial.println(randomValue);    
  }
  for (int j=0; j<=10; j++){
    Serial.println(0); 
  } */
  
  if (randomValue >= 4.00)  {
      
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid2 , LOW);
    
    digitalWrite(solenoid3 , LOW);
    
    digitalWrite(solenoid4 , LOW);
    Serial.println("No solenoid open");
    Serial.println (myString + randomValue);  

  } else if (randomValue >= 3.0) {
    
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
    
  } else if (randomValue >= 4.00)  {
      
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid2 , LOW);
    
    digitalWrite(solenoid3 , LOW);
    
    digitalWrite(solenoid4 , LOW);
    Serial.println("No solenoid open");
    Serial.println (myString + randomValue);    

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
    
    

  } else if (randomValue >= 0.00) {
    float remainingPercentage = (randomValue - int(randomValue)) * (100.0);
    
    int solenoid1Time = remainingPercentage * (10);
    digitalWrite(solenoid2 , HIGH);
    
    digitalWrite(solenoid3 , HIGH);
    
    digitalWrite(solenoid4 , HIGH);
    
    digitalWrite(solenoid1 , HIGH);
    Serial.println("No of solenoids in use:1");
    Serial.println (myString + randomValue);
    delay(solenoid1Time);

  } else if (randomValue >= 4.00)  {
      
    digitalWrite(solenoid1 , LOW);
    
    digitalWrite(solenoid2 , LOW);
    
    digitalWrite(solenoid3 , LOW);
    
    digitalWrite(solenoid4 , LOW);
    Serial.println("No solenoid open");
    Serial.println (myString + randomValue);  
    
    
  }  
  
    
  }
 }


}}
