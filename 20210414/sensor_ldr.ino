#define portaLDR A0

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println( analogRead(portaLDR) );
  delay(300);
}