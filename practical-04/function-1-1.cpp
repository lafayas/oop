#include <iostream>
#include <string.h>
using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            second[i][j] = first[i][j]; 
            cout<< second[i][j];
        }
    }
    cout<<endl;
    
}