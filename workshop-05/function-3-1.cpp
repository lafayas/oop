#include <iostream>
using namespace std;

int *readNumbers()
{
    int length = 3;
	int *readNumbers = new int [3];
	
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

bool equalsArray(int *numbers1,int *numbers2,int length)
{   
    bool equalsArray = 0;
    int counter = 0;
    
    if (length < 1)
    {
        return equalsArray;
    }
    
    for (int i = 0; i < length; i++)
	{
		if (*(numbers1 + i) == *(numbers2 + i))
			counter = counter+1;
	}
	
	if (counter == length)
	{
		equalsArray = 1;
		return equalsArray;	
	}
	else
	{
		return equalsArray;
	}
}