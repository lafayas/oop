/*Given a multi-dimensional array of integers, print all its elements.  Elements should be printed by row, with a space separating elements on a row, and a newline separating rows. (use std::endl)

Signature: void printer(int array[10][10]);*/
#include <iostream>
using namespace std;
void printer(int array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {   
            if (i <= 9 && j < 9)
            {
        
                cout << array[i][j] << " ";
            }
            else
            {
                cout << array[i][j];
            }
        }
        cout << "\n";
    }
    
}
