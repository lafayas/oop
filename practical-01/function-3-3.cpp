#include <iostream>
#include <stdlib.h>
int main()
{

    int a[6] = {1,2,1,4,1,3};


    int len = 6;
    int temp = 0;
    int count [100000];

    for (int i = 0;i < len;i++)
    {
        if (temp  = a[i])
        {
            
        
        count[temp]++;
        }
    }  
    for(int j = 1;j <= len;j++)
    {   
        int c = (count[j] * a[j-1]);
        std::cout << c << std::endl;
    }
    return 0;
}