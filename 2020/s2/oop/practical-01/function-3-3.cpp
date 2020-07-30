#include <iostream>
#include <stdlib.h>
int main()
{

    int a[] = {1,2,3,4,4,3};


    int len=7,i=0,j=0,temp=0;
    int count [10000];

    for (i = 0;i < len;i++)
    {
        temp  = a[i];
        count[temp]++;  //66666  
    }  
    for(j = 1;j <= len;j++)
    {
        std::cout << count[j] << std::endl;
    }

    return 0;
}