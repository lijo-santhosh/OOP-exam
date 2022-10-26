#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
    private:
        Employee(int payRate);    // creates a Employee with payRate
        int payRate; // hourly payRate
        float energyLevel;   // Initially 100%
        void takeABreak(int mins);
        virtual void work(int mins) = 0;
        float pay();
    public:
        Employee(int worker_payrate, float worker_energylevel){
        payRate = worker_payrate;
        energyLevel = worker_energylevel;
        }

    int get_payrate(){return payRate;}
    int get_energyLevel(){return energyLevel;}

};

#endif // Employee