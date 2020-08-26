#include <iostream>
#include <stdlib.h>

using namespace std;  

extern int *createArray(int n);
extern void displayArray(int *numbers, int length);
extern void printSubArrays(int *numbers, int length);


int main ()
{
  int length = 4;
  int n = 4;
  int *numbers = new int [length];
  
  
  numbers = createArray(length);
  
  
  printSubArrays(numbers, length);
  
  
  delete [] numbers;
  
  return 0;
}