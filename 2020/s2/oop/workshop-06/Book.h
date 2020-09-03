#pragma once

#include <string>
using namespace std;

class Book
{
    public:
    Book();
    Book(string bname, int bamount);
    
    string name;
    int amount;
    
    void setName(string sname);
    void getName();
    
    void setAmount(int samount);
    void getAmount();
    
    ~Book();
};