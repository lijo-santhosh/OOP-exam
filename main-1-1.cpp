#include <iostream>
#include "Employee.h"

using namespace std;

int main() {

    Employee worker(24.5,80);

    //e1.get_payRate

    cout << "Pay rate: " << worker.get_payrate() << endl;
    cout << "Energy level:  " << worker.get_energyLevel() << endl;


    return 0;
}