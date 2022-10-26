#include <iostream>
#include <string>
#include "Casual.h"

using namespace std;


void Employee::takeABreak(int mins) {
    if (energyLevel < 100) {
    energyLevel = energyLevel + (mins*(2)+2+2+2+3);
    }
}