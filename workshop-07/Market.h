#pragma once
#include <iostream>
using namespace std;


class Market
{
    public:
    Market() ;                      
    void setName(string marName);   
    string getName();
    void setAge(int merAge);        
    int getAge();
    
    protected:
    
    private:
    string marName_;
    int merAge_;
};

