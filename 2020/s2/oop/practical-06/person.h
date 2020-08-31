/*Define and implement a class named person that has the following constructors and behaviours:

person(string myName,int Salary); // a name and salary must be provided to create a person
void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's salary
int getSalary();

Your main program should create four person objects and change and display their details. Your main program should demonstrate that the name and salary information is changed. 
This class will also be used in problem 2-2.*/
#pragma once
#include <iostream>
using namespace std;

class person
{
    public:
    person(string myName,int Salary); 
    void setName(string myName);      
    string getName();
    void setSalary(int mySalary);     
    int getSalary();
    protected:
    
    private:
    string name_;
    int salary_;
    
};