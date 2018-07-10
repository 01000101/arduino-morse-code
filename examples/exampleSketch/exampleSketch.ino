#include <morsecode.h>

/*
  Morse Code
  Blinks an LED (or whatever the digital port controls) based on the 
  Morse Code of a letter. 
  This example code is in the public domain.

  created 29 January 2015
  by Joshua Cornutt
 */

MorseCode mc(13, 100);

// the setup function runs once when you press reset or power the board
void setup() {

}

// the loop function runs over and over again forever
void loop() {
  char *str = "Hello World";
  mc.fromStr(str);
}
