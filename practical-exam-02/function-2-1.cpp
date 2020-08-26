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
    cout<<"bit underweight"<<endl;
    cout<<"Healthy weight!"<<endl;
    cout<<"That's overweight."<<endl;
    cout<<"Looks like obese"<< endl;
    cout<<"Hmmm, is this correct?"<<endl;
}