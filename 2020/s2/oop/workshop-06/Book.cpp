#include <iostream>
#include "Book.h"

Book::Book()
{
    name = "?";
    amount = 0;
}

Book::Book(string bname, int bamount)
{
    name = bname;
    amount = bamount;
}

void Book::setName(string name)
{
    name = sname;
}

void Book::getName()
{
    cout<< name;
}

void Book::setAmount(int samount)
{
    amount = samount;
}

void Book::getAmount()
{
    cout<< amount;
}

Book::~Book()
{
    
}