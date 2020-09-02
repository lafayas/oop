#include <iostream>
using namespace std;
extern int *readNumbers(); 
extern void printNumbers(int *numbers,int length);
extern void hexDigits(int *numbers,int length);

int main()
{
    int n = 10;
    int length = n;
    int *numbers = new int [n];
    numbers = readNumbers(n);
    hexDigits(numbers, length);
    delete [] numbers;
    return 0;
}