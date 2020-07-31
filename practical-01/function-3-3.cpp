int weightedaverage(int array[], int n)
{
    double avg = 0.0;
    double sum = 0.0;
    double c = 0.0;
    
    if (n < 1)
    {
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i] == array[j])
            {
                c++;
            }
            
        }
        
        avg = array[i] * c / n;
        sum = avg + sum;
        c = 0.0;
    }
    
    return sum;
}