#include <iostream>
using namespace std;
extern int *readNumbers(); 
extern void printNumbers(int *numbers,int length);


int main()
{
    int n = 10;
    int length = n;
    int *numbers = new int [n];
    numbers = readNumbers();
    printNumbers(numbers, length);
    delete [] numbers;
    return 0;
}