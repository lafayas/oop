#include <iostream>
#include <stdlib.h>

using namespace std;

extern int *createArray(int n);
extern void displayArray(int *numbers, int length);
extern int winningPowerBall(int *nums,int length);

int main ()
{
  int length = 4;
  int n = 4;
  int *numbers = new int [length];


  numbers = createArray(length);


  cout<< winningPowerBall(numbers, length);


  delete [] numbers;

  return 0;
}