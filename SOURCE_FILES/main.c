// Modules
#include <stdio.h>
#include <math.h>
#include <unistd.h>

// Files
#include "triangle.h"
#include "rectangle.h"


int main () {
   initializeRectangle();
   sleep(2);
   areaRectangle();
   sleep(2);
   perimeterRectangle();
   sleep(2);
   diagonal();
   sleep(2);
   radiusOutOfRectangle();
}     