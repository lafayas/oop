/*Define and implement a class named cart.
A cart object represents a horse drawn cart that can seat up to four meerkats, after that meerkats have to walk.
The meerkats must be represented by meerkat objects.
The cart class has the following constructors and behaviours:

cart();                         // create an empty cart object
bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
void emptyCart();               // remove all meerkats from the cart
void printMeerkats();           // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added

Your main program should create a cart object and 5 meerkat objects. The cart object is initially empty.
Your main program must then add all 5 meerkat objects to the cart object.
An appropriate error message must be printed by your main program when the cart is full.*/

#include "cart.h"

int main()
{
    cart c1;
    meerkat m1;
    m1.setName("Kat1");
    m1.setAge(1);
    meerkat m2;
    m2.setName("Kat2");
    m2.setAge(1);
    meerkat m3;
    m3.setName("Kat3");
    m3.setAge(1);
    meerkat m4;
    m4.setName("Kat4");
    m4.setAge(1);
    meerkat m5;
    m5.setName("Kat5");
    m5.setAge(1);
    meerkat m6;
    m6.setName("Kat6");
    m6.setAge(1);
    meerkat m7;
    m7.setName("Kat7");
    m7.setAge(1);
    c1.addMeerkat(m1);
    c1.addMeerkat(m2);
    c1.addMeerkat(m3);
    c1.addMeerkat(m4);
    c1.addMeerkat(m5);
    c1.printMeerkats();
    c1.emptyCart();
    c1.addMeerkat(m6);
    c1.addMeerkat(m7);
    c1.printMeerkats();
}