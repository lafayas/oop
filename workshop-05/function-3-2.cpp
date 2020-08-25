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

bool equalsArray(int *numbers1,int *numbers2,int length)
{   
  
    
    if (length < 1)
    {
        return false;
    }
    
    for (int i = 0; i < length; i++)
	{
		if (*(numbers1 + i) != *(numbers2 + i))
		{
		    return false;
		}
			
	}
	
    return true;
}

int *reverseArray(int *numbers1,int length)
{
	int *reverseArray = new int [length];
	int n = length;
	
	if (length < 1)
	{
		return 0;
	}

	for (int i = 0; i < length; i++)
	{   
	    n = n - 1;
		*(reverseArray + n) = *(numbers1 + i);
	}
	
	return reverseArray;
}