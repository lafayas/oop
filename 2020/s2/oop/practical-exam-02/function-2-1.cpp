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

void bmiIndex (int weight)
{   
      string *weight0 = new string [4];
      int *weight1 = &weight;
  
  for (int i = 0; i < 4; i++)
  {
      switch(weight1[i])
      {
          case 18:
          weight0[i] = "bit underweight";
          break;
          case 24:
          weight0[i] = "Healthy weight!";
          break;
          case 29:
          weight0[i] = "That's overweight.";
          case 39:
          weight0[i] = "Looks like obese";
          break;
          default:
          weight0[i] = "Hmmm, is that correct?";
          break;
      }
  }
  for (int i = 0; i < 4; i++)
  {
    
    cout<<i<<" "<<*(weight1+i)<<" "<<*(weight0+i)<<endl;
  }
}