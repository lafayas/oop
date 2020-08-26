#include <iostream>
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

void printSubArrays(int *numbers, int length)
{   
    int s = 0;
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            for (int k = i; k <= j; k++)
            {
                s = s + numbers[i];
            }
        }
    }
}