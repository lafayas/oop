#include <iostream>
#include "Library.h"
#include "Book.h"

int main()
{
    Library *aLibrary;
    Book *Book1;
    Book *Book2;
    Book *Book3;
    Book *Book4;
    Book1 = new Book("abook", 1);
    Book2 = new Book("bbook", 23);
    Book3 = new Book("cbook", 0);
    Book4 = new Book("dbook1", 9012);
    Book booklist[3] = {*Book1, *Book2, *Book3};
    aLibrary = new Library(booklist);
    aLibrary->borrowBook("cbook");
    aLibrary->returnBook("cbook");
    aLibrary->returnBook("dbook1");
    return 0;
}