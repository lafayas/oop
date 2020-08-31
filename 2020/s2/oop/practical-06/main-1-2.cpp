/*Define and implement a class named person that has the following constructors and behaviours:

person(string myName,int Salary); // a name and salary must be provided to create a person
void setName(string myName);      // change the person's name
string getName();
void setSalary(int mySalary);     // change the person's salary
int getSalary();

Your main program should create four person objects and change and display their details. Your main program should demonstrate that the name and salary information is changed. 
This class will also be used in problem 2-2.*/

#include "person.h"

int main()
{
    person p1 = person("Jack", 1000);
    p1.setName("Jack");
    p1.setSalary(1000);
    cout<< p1.getName()<< "\n"<< p1.getSalary()<< endl;
    
    person p2 = person("Joe", 1000);
    p2.setName("Joe");
    p2.setSalary(2000);
    cout<< p2.getName()<< "\n"<< p2.getSalary()<< endl;
    
    person p3 = person("Ben", 3000);
    p3.setName("Ben");
    p3.setSalary(3000);
    cout<< p3.getName()<< "\n"<< p3.getSalary()<< endl;
    
    person p4 = person("John", 4000);
    p4.setName("John");
    p4.setSalary(4000);
    cout<< p4.getName()<< "\n"<< p4.getSalary()<< endl;
}