int max_integer(int integers[], int length)
{   
    int max = integers[0];
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
    }
    return max;
}

int min_integer(int integers[], int length)
{   
    int min = integers[0];
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
    }
    return min;
}

int sum_min_and_max(int integers[], int length)
{
    int max = integers[0];
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] > max)
        {
            max = integers[i];
        }
    }
    
    int min = integers[0];
    
    for (int i = 0; i < length; i++)
    {
        if (integers[i] < min)
        {
            min = integers[i];
        }
    }
    
    int sum = max + min;
    return sum;
}


