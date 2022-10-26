#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee {
    public:
        Employee(int payRate);    // creates a Employee with payRate
        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%
        void takeABreak(int mins);
        virtual void work(int mins) = 0;
        float pay();
    private:
};
#endif // Employee