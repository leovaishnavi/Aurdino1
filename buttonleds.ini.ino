
void setup() {
//UTPUT  LED_BUILTIN= 13;
 pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);// Initialize the LED_BUILTIN pin as an output
}

// the loop function runs over and over again forever
void loop() {
 
if(digitalRead(7)==HIGH){
    digitalWrite(8, HIGH);
   delay(100);                      // Wait for a second
  digitalWrite(8, LOW);  // Turn the LED off by making the voltage HIGH
  delay(200);

  
  

    digitalWrite(9, HIGH);
   delay(100);                      // Wait for a second
  digitalWrite(9, LOW);  // Turn the LED off by making the voltage HIGH
  delay(200);
  

  digitalWrite(10, HIGH);
   delay(100);                      // Wait for a second
  digitalWrite(10, LOW);  // Turn the LED off by making the voltage HIGH
  delay(200);
  

    digitalWrite(11, HIGH);
   delay(100);                      // Wait for a second
  digitalWrite(11, LOW);  // Turn the LED off by making the voltage HIGH
  delay(200);
}
  
}
