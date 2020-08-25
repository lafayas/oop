#include <iostream>
#include <stdlib.h>

using namespace std;  

int *readNumbers(int length);
void printNumbers(int *numbers, int length);

int main ()
{
  int length = 5;
  int *numbers = new int [length];
  
  
  numbers = readNumbers(length);
  
  
  printNumbers(numbers, length);
  
  
  delete [] numbers;
  
  return 0;
}