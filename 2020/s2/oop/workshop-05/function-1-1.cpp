#include <iostream>
using namespace std;

int *readNumbers()
{
    int length = 10;
	int *readNumbers = new int [10];
	
	if (length <1)
	{
		return 0;
	}

	for (int i = 0; i < length; i++)
	{
		cin>>*(readNumbers+i);
	}
	
	return readNumbers;
}

void printNumbers(int *numbers,int length)
{
	for (int i = 0; i < length; i++)
	{
		cout<<i<<" "<<*(numbers+i)<<endl;
	}
}
