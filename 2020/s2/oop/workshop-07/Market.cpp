#include "Market.h"

Market::Market()
{
    
}  

void Market::setName(string marName)
{
    marName_ = marName;
}

string Market::getName()
{
    return marName_;
}

void Market::setAge(int merAge)
{
    merAge_ = merAge;
}

int Market::getAge()
{
    return merAge_;
}