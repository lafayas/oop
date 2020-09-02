#include <iostream>
using namespace std;
extern int *readNumbers(); 
extern void printNumbers(int *numbers,int length);
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length);

int main()
{
    int length = 10;
		
	int *numbers1 = new int [length];
	int *numbers2 = new int [length];
	
	numbers1 = readNumbers();
	numbers2 = reverseArray(numbers1, length);
	
	
	for (int i = 0; i < length; i++)
	{
		cout<<numbers2[i]<<endl;

	}
	
	
	
	
	delete [] numbers1;
	delete [] numbers2;
	
	return 0;
}