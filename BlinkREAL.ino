/*This code is made for the digital output funtion. 1 pin of the arduino connected to a
LED will be turned on and off with a delay to simulate a blink funtion.*/



// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function will keep running until manually stopped. 
void loop() {
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);                      // wait for a 500ms
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(500);                      // wait for a 500ms


}
