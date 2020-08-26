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
		cout<< "{";
	    for (int j = i; j < length; j++)
		{
			
			for (int m = i; m <= j; m++)
			{   
			   
				cout<< numbers[m]<< ",";
				
			}
			cout<< "}";
		}
		
		
	    cout<<endl;
	}
}