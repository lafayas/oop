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

cart::cart()
{

}

bool cart::addMeerkat(meerkat cat)
{
    if (cat_.size() == 4)
    {
        return false;
    }
   
    cat_.push_back(cat);
    return true;
    
}

void cart::emptyCart()
{
    cat_.clear();
}

void cart::printMeerkats()
{   
    for (int i = 0; i < cat_.size(); i++)
    {
        cout<< cat_[i].getName()<< " "<< cat_[i].getAge()<< endl;
    }
}