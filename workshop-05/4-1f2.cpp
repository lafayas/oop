#include <iostream>
using namespace std;

int *readNumbers(int n)
{
    int *readNumbers = new int [n];
    
    for (int i = 0; i < n; i++)
    {
        cin>> *(readNumbers + i);
    }
    return readNumbers;
}

int secondSmallestSum(int *numbers, int length)
{
    if (length < 1)
    {
        return 0;
    }
    
    int min = numbers[0];
    int second = numbers[0];
    int p = 0;
    
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = 0; j < length - i; j++)
        {
            sum += numbers[i + j];
            if (sum < min)
            {
                p = i + j;
                second = min;
                min = sum;
            }
            else if (sum > min && sum <= second)
            {
                second = sum;
            }
            else if (sum == min && (i + j) != p)
            {
                second = min;
            }
        }
    }
    return second;
}