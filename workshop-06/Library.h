#pragma once

#include <string>
#include "Book.h"

class Library
{
    public:
    Library();
    Library(Book *book_collection);
    
    Book *collection;
    
    void borrowBook(string bname);
    void returnBook(string bname);
    
    ~Library();
}