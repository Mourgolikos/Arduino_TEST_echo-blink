/* Using a variable called byteRead to temporarily store
   the data coming from the computer */
byte byteRead;

void setup() {                
// Turning the Serial Protocol ON
  Serial.begin(9600);
// Blink
  pinMode(13, OUTPUT);
}

void loop() {
   /*  checking if data has been sent from the computer */
  if (Serial.available()) {
    /* read the most recent byte */
    byteRead = Serial.read();
    /*ECHO the value that was read, back to the serial port. */
    Serial.write(byteRead);
  }
  // Blink
  digitalWrite(13, HIGH);
  delay(99);
  digitalWrite(13, LOW);
  delay(99);
}
