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

int secondSmallestSum(int *numbers,int length)
{
	if (length <1)
			return 0;

	int sum = numbers[0];
	int second = numbers[0];
	int new_sum = 0;
	

	for (int i = 0; i < length; i++)
	{
		for (int j = i; j < length; j++)
		{
			for (int k = i; k <= j; k++)
			{
			  new_sum = numbers[i];
			  new_sum = new_sum + numbers[k];
			  
			}
			
			if (new_sum < sum )
			{
			  second = sum;
			  sum = new_sum;
			  
			}
			
			
			
		}
	}
	return 0;
}