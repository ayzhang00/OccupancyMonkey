int led = 13;                // the pin that the LED is atteched to
int sensor = 2;              // the pin that the sensor is atteched to
int state = LOW;             // by default, no motion detected
int val = 0;                 // variable to store the sensor status (value)

void setup() {
  // initalize LED as an output
  pinMode(sensor, INPUT);    // initialize sensor as an input
  Serial.begin(9600);        // initialize serial
}

void loop(){
  val = digitalRead(sensor);   // read sensor value
  Serial.println(val); 
  delay(500);
  /*
  if (val == HIGH) {           // check if the sensor is HIGH
    delay(500);                // delay 100 milliseconds 
    
    if (state == LOW) {
      Serial.println("Motion detected!"); 
      state = HIGH;       // update variable state to HIGH
    }
  } 
  else {
  
      delay(500);             // delay 200 milliseconds 
      
      if (state == HIGH){
        Serial.println("Motion stopped!");
        state = LOW;       // update variable state to LOW
    }
  }
  */
}
