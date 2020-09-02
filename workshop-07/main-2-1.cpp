#include <iostream>
using namespace std;
extern void printNumbers(int *numbers,int length);
extern int *readNumbers(int n); 
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