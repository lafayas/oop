#include <iostream>
int identity(int array[10][10])
{   
    int count = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
            {
                if (array[i][j] != 1)
                {
                    return false;
                }
            }
            else if (i != j)
            {
                if (array[i][j] != 0)
                {
                    return false;
                }
            }
            else
            return true;
        }
    }
    return 0;
}

