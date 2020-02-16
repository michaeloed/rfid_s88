#include <Arduino.h>

void setup()
{
	pinMode(13, OUTPUT);
	srand(42);
}

void loop()
{
	digitalWrite(13, HIGH);
	delay(25 + rand() % 250);
	digitalWrite(13, LOW);
	delay(25 + rand() % 250);
}
