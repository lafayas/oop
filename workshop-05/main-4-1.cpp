#include <iostream>
using namespace std;
extern int *readNumbers(int length);
extern void printNumbers(int *numbers,int length);
extern int secondSmallestSum(int *numbers,int length);

int main()
{   
    int length = 10;
	int *numbers = new int [length];
	int *small = new int [length];
	
	numbers = readNumbers(length);
	*small = secondSmallestSum(numbers, length);
	
    cout<<*small<<endl;
	
	delete [] numbers;
	delete [] small;
	
	return 0;
    
}