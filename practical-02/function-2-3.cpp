bool is_a_palindrome(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }
    for (int i = 0; i < length / 2; i++)
    {
        if (integers[i + 1] >= integers[i] && integers[i] == integers[length - i - 1])
        {
            return integers[i];
        }
        else
        {
            return -2;
        }
    }
}

int sum_elements(int integers[], int length)
{   
    if (length <= 0)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += integers[i];
    }
    return sum;
}

int sum_if_a_palindrome(int integers[], int length)
{
    if (length <= 0)
    {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < length / 2; i++)
    {
        if (integers[i] == integers[length - i - 1])
        {
            for (int i = 0; i < length; i++)
            {   
                sum += integers[i];
            }
                return sum;
        }
        else
        {
            return -2;
        }
    }


}

