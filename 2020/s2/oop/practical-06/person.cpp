/*Define and implement a class named person that has the following constructors and behaviours:

person(string myName,int Salary); // a name and salary must be provided to create a person
void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's salary
int getSalary();

Your main program should create four person objects and change and display their details. Your main program should demonstrate that the name and salary information is changed. 
This class will also be used in problem 2-2.*/

#include "person.h"

person::person(string myName,int Salary)
{
    name_ = myName;
    salary_ = Salary;
}

void person::setName(string myName)
{
    name_ = myName;
}
string person::getName()
{
    return name_;
}
void person::setSalary(int mySalary)
{
    salary_ = mySalary;
}
int person::getSalary()
{
    return salary_;
}