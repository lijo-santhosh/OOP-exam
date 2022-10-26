#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

void Employee::takeABreak(int mins) {
    if (energyLevel < 100) {
    energyLevel = energyLevel + (mins*(2));
    }
}