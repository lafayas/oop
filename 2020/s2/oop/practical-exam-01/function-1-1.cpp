#include <iostream>
void printer(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            if (i <= 9 && j < 9)
            {
        
                std::cout << array[i][j] << " ";
            }
            else
            {
                std::cout << array[i][j];
            }
        }
        std::endl;
    }
    
}
