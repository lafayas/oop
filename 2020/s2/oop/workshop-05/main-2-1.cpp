#include <iostream>
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern void hexDigits(int *numbers,int length);

int main()
{   
    int length = 10;
	int *numbers = new int [length];
	
	numbers = readNumbers();
	hexDigits(numbers, length);
	
	return 0;
}