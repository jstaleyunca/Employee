/* 
 * File:   Employee.cpp
 * Author: John
 * 
 * Created on March 16, 2015, 4:50 PM
 */

#include "Employee.h"
#include <cstdlib>
#include <string>

using namespace std;

Employee::Employee(int initId, string initName, double initAmount) {
    id = initId;
    name = initName;
    payRate = initAmount;
}

Employee::Employee(const Employee& orig) {
    id = orig.id;
    name = orig.name;
    payRate = orig.payRate;
}

int Employee::getId() {
    return id;
}

string Employee::getName() {
    return name;
}

double Employee::getPayRate() {
    return payRate;
}

void Employee::setName(string newName) {
    name = newName;
}

double Employee::grossPay(double hours) {
    return payRate * hours;
}

double Employee::netPay(double hours) {
    return (payRate * hours) * (1.0 - TAX_RATE);
}

void Employee::setPayRate(double newPayRate) {
    payRate = newPayRate;
}