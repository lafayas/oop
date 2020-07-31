// function to ...
int median(int array[], int n)
{
	if (n % 2 == 0 || n < 1)
	{
	    return 0;
	}
	
	int num = 0;
	
	int sortedarray[n];
	
	for (int i = 0; i < n ; i++)
	{
	    sortedarray[i] = array[i];
	}
	
	for (int j = n -1; j > 0; j--)
	{
	    for (int k = 0; k < j; k++)
	    {
	        if (sortedarray[k] > sortedarray[k + 1])
	        {
	            num = sortedarray[k];
	            sortedarray[k] = sortedarray[k + 1];
	            sortedarray[k + 1] = num;
	        }
	    }
	}
	int median = sortedarray[n / 2];
	return median;
}
