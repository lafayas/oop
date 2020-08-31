/*Define and implement a class named meerkat that has the following constructors and behaviours:

meerkat() ;                      // no name or age is required to create a meerkat
void setName(string meerName);   // change the meerkat's name
string getName();
void setAge(int meerAge);        // change the meerkat's age
int getAge();

Your main program should create four meerkat objects and set and display their details 
(note that this means the main program should use the object behaviours to get and output the object state. 
The object behaviours should return the appropriate values and should NOT use cout . 
Your main program should demonstrate that the name and age information is changed. This class will also be used in problem 2-1.*/

#include "meerkat.h"

int main()
{
    meerkat m1;
    m1.setName("Kat1");
    m1.setAge(1);
    cout<< m1.getName()<< "\n"<< m1.getAge()<< endl;
    meerkat m2;
    m2.setName("Kat2");
    m2.setAge(2);
    cout<< m2.getName()<< "\n"<< m2.getAge()<< endl;
    meerkat m3;
    m3.setName("Kat3");
    m3.setAge(3);
    cout<< m3.getName()<< "\n"<< m3.getAge()<< endl;
    meerkat m4;
    m4.setName("Kat4");
    m4.setAge(4);
    cout<< m4.getName()<< "\n"<< m4.getAge()<< endl;


}