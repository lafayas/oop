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

aircraft::aircraft(string callsign,person thePilot,person theCoPilot): callsign_(callsign), thepilot_(thePilot), thecopilot_(theCoPilot)
{
}

void aircraft::setPilot(person thePilot)
{
    thepilot_ = thePilot;
}

person aircraft::getPilot()
{
    return thepilot_;
}

void aircraft::setCoPilot(person theCoPilot)
{
    thecopilot_ = theCoPilot;
}

person aircraft::getCoPilot()
{
    return thecopilot_;
}

void aircraft::printDetails()
{
    cout<< callsign_<< "\n"<< thepilot_.getName()<< "\n"<< thecopilot_.getName()<< endl;
}