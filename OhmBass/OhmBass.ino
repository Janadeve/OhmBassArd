/*
 Name:		OhmBass.ino
 Created:	03/05/2019 14:41:31
 Author:	ActiOhm & Jana
*/

#include <TimeLib.h>



int i;
time_t mMinute;

// the setup function runs once when you press reset or power the board
void setup() {
	i = 0;
	mMinute = minute(now());
	Serial.begin(9600);
}

// the loop function runs over and over again until power down or reset
void loop() {
	i++;
	mMinute = minute(now());
	Serial.print("Contador: ");
	Serial.print(i, DEC);
	Serial.print("Time: ");
	Serial.print(mMinute, DEC);
	Serial.print("--------------------\n");
}
