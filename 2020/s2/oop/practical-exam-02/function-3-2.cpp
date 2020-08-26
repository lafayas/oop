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

bool equalsArray(int *A,int *B,int length)
{

	bool res = false;
    int count = 0;
    if(length>1)
    {
       for(int i = 0 ; i < length; i++)
       {
            if(A[i]==B[i])
            {
              count++;
            }
        }
    }
     
    if (count == length)
    {
     res =true;
    } 

    return res;
}