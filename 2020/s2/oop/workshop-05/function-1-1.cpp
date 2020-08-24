#include <iostream>
using namespace std;
int *readNumbers()
{
    return 0;
}

void printNumbers(int *numbers,int length)
{
    cout<< "\n";
}

void printer(int array[10][2])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (i <= 9 && j <1)
            {
                std::cout << array[i][j] << " ";

            }
            else
            {
                std::cout << array[i][j];
            }
        }
        std::cout<<std::endl;
    }
}
