/*Define and implement a class named aircraft. 
An aircraft object represents an aircraft with a pilot and a co-pilot. 
The pilot and co-pilot must be represented by person objects. 
The aircraft class has the following constructors and behaviours:

// a pilot and copilot must be provided when creating an aircraft
aircraft(string callsign,person thePilot,person theCoPilot);
void setPilot(person thePilot);      // change the pilot
person getPilot();
void setCoPilot(person theCoPilot);  // change the co-pilot
person getCoPilot();
void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.

Your main program should create an aircraft object and three person objects. 
Two of the person objects must be passed to the constructor when the aircraft object is created. 
Your main program must then replace the pilot with the third person object, 
then replace the co-pilot with the original pilot.*/

#include "aircraft.h"

int main()
{
    person pilot = {"original-pilot", 1000};
    person copilot = {"co-pilot", 1000};
    aircraft F22 = {"F22", pilot, copilot};
    F22.setPilot(pilot);
    F22.setCoPilot(copilot);
    F22.printDetails();
    person pilot1 = {"new-pilot", 1000};
    person copilot1 = {"original-pilot", 1000};
    F22.setPilot(pilot1);
    F22.setCoPilot(copilot1);
    F22.printDetails();
    
}