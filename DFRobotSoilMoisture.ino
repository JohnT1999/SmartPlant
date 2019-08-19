  /*
  # Editor     : Lauren
  # Date       : 13.01.2012
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0 ~ 500     dry soil
  # 500 ~ 720     humid soill
  # 720~950     in water
  */
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
  pinMode(LED_BUILTIN,OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0); //connect sensor to Analog 0
  Serial.println(val); //print the value to serial port
  delay(1000);
  if(val < 500)
  digitalWrite(LED_BUILTIN,HIGH);
  else
  digitalWrite(LED_BUILTIN,LOW);
}
