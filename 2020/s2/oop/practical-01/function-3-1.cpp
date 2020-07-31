// function to ...
bool fanarray(int array[], int n)
{
	if (n < 1)
	{
		return false;
	}
	
	bool x = true;
	
	for (int i = 0; i < n / 2; i++)
	{
	    if (array[i + 1] < array[i] || array[i] != array[n - i - 1])
	    {
	        x = false;
	    }
	}
	
	bool y = false;
	
	for (int i = n / 2; i < n - 1; i++)
	{
	    if (array[i + 1] < array[i])
	    {
	       y = true;
	    }
	}
	if (y == true && x == true)
	{
	    return true;
	}
	else
	{
	    return false;
	}
}
