#include <iostream>
#include <stdlib.h>

using namespace std; 

extern int *readNumbers(int n) ;
extern bool equalsArray(int *A,int *B,int length) ;

int main()
{
   const int size = 5;
   int* arry1 = new int[size];
   int* arry2 = new int[size];
   
   arry1 = readNumbers (size);
   arry2 = readNumbers (size);
   
   cout<<equalsArray(arry1,arry2,size)<<endl;
   
   delete [] arry1;
   delete [] arry2;

   return 0;
}