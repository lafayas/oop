#include <iostream>
int identity(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        { 
            if (array[i][j] == 1 && array[i][i] == 0 && array[j][j] == 0)
            {
                return true;
            }
            else
            return false;
        }
    }
    return 0;
}

