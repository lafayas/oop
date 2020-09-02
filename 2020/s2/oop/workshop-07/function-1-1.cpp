#include <iostream>
using namespace std;

int *readNumbers()
{   
    int n = 10;
    int *readNumbers = new int [n];
    for (int i = 0; i < n; i++)
    {
        cin>>*(readNumbers + i);
    }
    return readNumbers;
}

void printNumbers(int *numbers,int length)
{
    for (int i = 0; i < length; i++)
    {
        cout<<i<< " "<< *(numbers + i)<< endl;
    }
}