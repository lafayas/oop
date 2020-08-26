#include <iostream>
using namespace std;

int *createArray(int n)
{
    int *createArray = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin>> *(createArray + i);
    }
    return createArray;
}

void printSubArrays(int *numbers,int length)
{
	
	for (int i = 0; i < length; i++)
	{   
		
	    for (int j = i; j < length; j++)
		{
			cout<< "{";
			for (int m = i; m <= j; m++)
			{   
				if (m == j)
				{
					cout<< numbers[m];
				}
				else
				{
					cout<< numbers[m]<< ",";
				}
				
			}
			if (j == length - 1)
			{
				cout<< "}";
			}
			else
			{
				cout<< "},";
			}

			
		}
		
		
	    cout<<endl;
	}
}