#include <iostream>
#include "Library.h"

Library::Library()
{
    collection = new Book[0];
}

Library::Library(Book *book_collection)
{
    collection = book_collection;
}
    
void Library::borrowBook(string bname)
{
    int st = 0;
    for (int i = 0; i < sizeof(collection); i++)
    {
        if ((*(collection + i)).name == bname)
        {
            if((*(collection + i)).amount <= 0)
            {
                cout<< "Sorry, there is no book among these books that is available for borrow now."<< endl;
                break;
            }
            else
            {
                (*(collection + i)).amount--;
                cout<< "Borrow succeeded"<< endl;
                break;
            }
            else
            {
                st++;
            }
        }
    }
    if (st == sizeof(collection))
    {
        cout<< "It's not possible to find the book."<< endl;
    }
}

void Library::(string bname)
{
    int st = 0;
    for (int i = 0; i < sizeof(collection); i++)
    {
        if ((*(collection + i)).name == bname)
        {
            (*(collection + i)).amount++;
            cout<< "You return the book successfully."<< endl;
            break;
        }
        else
        {
            st++;
        }
    }
    if (st == sizeof(collection))
    {
        cout<< "It's not possible to find the book."<< endl;
    }
}

Library::~Library()
{
    
}