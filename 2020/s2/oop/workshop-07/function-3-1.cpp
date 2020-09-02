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

bool equalsArray(int *numbers1,int *numbers2,int length)
{
    if (length < 1)
    {
        return false;
    }
    for (int i = 0; i < length; i++)
    {
        if (*(numbers1 + i) != *(numbers2 + i))
        {
            return false;
        }

    }
    return true;
}