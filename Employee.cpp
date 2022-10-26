#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

class Employee {
public:
    Employee(int payRate)    // creates a Employee with payRate
     ;int payRate; // hourly payRate
    float energyLevel;   // Initially 100%

private:
    ;void takeABreak(int mins);

};

void Employee::takeABreak(int mins) {
    if (energyLevel < 100) {
    energyLevel = energyLevel + (mins*(2));
    }
}