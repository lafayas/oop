#include <iostream>
using namespace std;
extern void printNumbers(int *numbers,int length);
extern int *readNumbers(int n); 

int main()
{
    int n = 10;
    int length = n;
    int *numbers = new int [n];
    numbers = readNumbers(n);
    printNumbers(numbers, length);
    delete [] numbers;
    return 0;
}