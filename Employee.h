/* 
 * File:   Employee.h
 * Author: John
 *
 * Created on March 16, 2015, 4:50 PM
 */

#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>

using namespace std;

class Employee {
public:
    const double TAX_RATE = 0.25;
    Employee(int initId, string initName, double initAmount);
    Employee(const Employee& orig); //good thing to have something that will automatically clone something for you
    int getId(); //returns the Employee’s id
    string getName(); //returns the Employee’s name
    double getPayRate(); //returns the Employee’s payRate

    //mutator methods
    void setName(string newName); //a void method that sets Employee’s name to newName
    void setPayRate(double newPayRate);

    //other methods
    double grossPay(double hours); //a double method that returns the Employee’s gross pay based on hours.
    double netPay(double hours); //a double method that returns the Employee’s net pay.  
    //An employee’s net pay is the grosspay * (1.0 – TAX_RATE)

private:

    int id; //an int that represents the Employee’s id number
    string name; //a string for the Employee’s name
    double payRate; //a double that represents the Employee's Salary or Pay Rate

};

#endif	/* EMPLOYEE_H */

