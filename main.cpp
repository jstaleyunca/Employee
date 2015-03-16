/* 
 * File:   main.cpp
 * Author: John
 *
 * Created on March 16, 2015, 4:50 PM
 */

#include <cstdlib>
#include <iostream>
#include "Employee.h"

using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    Employee pat = Employee(1234, "Pat", 15.75);
    cout << "Name: " << pat.getName() << endl;
    cout << "ID: " << pat.getId() << endl;
    cout << "Pay Rate: " << pat.getPayRate() << endl;
    cout << "Gross Pay for 40 hours: " << pat.grossPay(40) << endl;
    cout << "Net Pay for 40 hours: " << pat.netPay(40) << endl;
    return 0;
}

