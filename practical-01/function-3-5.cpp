#include <stdlib.h>
#include <iostream>
// function to ...
double sumeven(double array[], int n)
{
	if (n < 1)
	{
	    return 0;
	}
	double sumeven = 0.0;
	for (int i = 0; i < n; i++)
	{
	
		if (i % 2 == 0)
		{
	    	sumeven += array[i];
		}
	    
	}
	return sumeven;
}