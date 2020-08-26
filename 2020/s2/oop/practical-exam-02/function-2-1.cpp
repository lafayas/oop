#include <iostream>
#include <string>
using namespace std;

int *createArray(int n)
{
    int *createArray = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin>> *(createArray + i);
    }
    return createArray;
}

void displayArray(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
  {
    cout<<i<<" "<<*(numbers+i)<<endl;
  }
}

void bmiIndex(int weight)
{
    if (weight == 18)
    {
        cout<< "bit underweight"<< endl;
    }
    else if (weight == 24)
    {
        cout<< "Healthy weight!"<< endl;
    }
    else if (weight == 29)
    {
        cout<< "That's overweight."<< endl;
    }
    else if (weight == 39)
    {
        cout<< "Hmm, is this correct?"<< endl;
    }
}