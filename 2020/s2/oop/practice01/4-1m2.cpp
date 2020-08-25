#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std; 

extern int *readNumbers(int n) ;
extern void printSubArrays(int *numbers,int length) ; 


int main(int argc, char** argv){
	// set up the length and pointer arry
   const int size=4;
   int* arr = new int[size];
   //delivery value 
   arr = readNumbers (size);
   printSubArrays(arr,size);
   //delete arr
   delete arr;

   return 0;
}