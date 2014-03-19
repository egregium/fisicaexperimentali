#define ENDSTOP_PIN 2  //what pin are we using?
void setup()

{
pinMode(ENDSTOP_PIN, INPUT);
Serial.begin(9600);
Serial.println("Starting opto endstop exerciser.");
}

void loop()
{
if (digitalRead(ENDSTOP_PIN))
{
if (0)
Serial.println("open.");
else
Serial.println("blocked.");
}
else
{
Serial.println("open.");
}
delay(500);
}
