//Elias Farhan
//June 6th, 2017

#include "Arglib.h"



#include "assets.h"


Arduboy arduboy;
Sprites sprites(arduboy);

void setup() {
  arduboy.start();
  
}

void loop() {

  arduboy.clearDisplay();
  sprites.drawOverwrite(5, 20, logo, 0);
  arduboy.display();
}
