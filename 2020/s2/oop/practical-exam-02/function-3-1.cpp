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

int winningPowerBall(int *nums,int length)
{   
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        if (i % 2 == 0)
        {
            nums[i] = nums[i] * 2;
        }
        else if(i % 2 != 0)
        {
            nums[i] = nums[i];
        }
        sum = sum + nums[i];
    }
    return sum;
}