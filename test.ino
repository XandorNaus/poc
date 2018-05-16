int led = 3;
int led2 = 2;
int LDR = A3;
int LDR2 = A2;
int LDRvalue;
int LDR2value;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); 
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(LDR, INPUT);
  pinMode(LDR2, INPUT);
  digitalWrite(led, HIGH);
  digitalWrite(led2, HIGH);

}

void loop() {

  

  LDR2value = analogRead(LDR2);
  Serial.println(LDR2value);

  
  
  if(LDR2value < 50){

  digitalWrite(led, LOW);
  
  
  
  }else{

  digitalWrite(led, HIGH);
  
}
    
   LDRvalue = analogRead(LDR);
   Serial.println(LDRvalue);

  
  
  if(LDRvalue < 50){

  digitalWrite(led2, LOW);
  
  
  
  }else{

  digitalWrite(led2, HIGH);
  
  }
}

