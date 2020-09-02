#include <iostream>
using namespace std;

int *readNumbers()
{
    int n = length;
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
        if (numbers1[i] != numbers2[i])
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int *reverseArray(int *numbers1,int length)
{
    int *reverseArray = new int [length];
    int n = length;
    if (length < 1)
    {
        return 0;
    }
    
    for (int i = 0; i < length; i++)
    {
        n = n - 1;
        *(reverseArray + n) = *(numbers1 + i);
    }
    return reverseArray;
}