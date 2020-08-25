#include <iostream>
#include <stdlib.h>

using namespace std; 

extern int *readNumbers(int n) ;
extern bool equalsArray(int *A,int *B,int length) ;

int main(int argc, char** argv){
	// set up the length and pointer arry
   const int size = 5;
   int* arry1 = new int[size];
   int* arry2 = new int[size];
   // delivery value
   arry1 = readNumbers (size);
   arry2 = readNumbers (size);
   //print out
   cout<<equalsArray(arry1,arry2,size)<<endl;
   //delete arr
   delete arry1;
   delete arry2;

   return 0;
}