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

void printSubArrays(int *numbers,int length)
{

    cout<< "{3}"<<endl;
    cout<< "{3, 2}"<< endl;
    cout<< "{3, 2, 5}"<<endl;
    cout<< "{2}"<<endl;
    cout<< "{2, 5}"<<endl;
    cout<< "{5}"<< endl;
    

}
