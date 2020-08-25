#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std; 

void printSubArrays(int *numbers,int length){
//set varables

 int arr [10];
 int res = 0;
 int k = 0; 
 int s =0 ;
 int secnum = 0;


// try to use 2 for loop to print
   for(int i = 0; i < length ; i++){
    // print the first number 
             k=k+s;
             cout<<"{"<<numbers[i]<<"}"<<endl;
             cout<<"{"<<numbers[i];
             secnum = numbers[i];
             s=1;
   // keep j < length 
        if(i<length-1){ 
           int e = 0;    
           //let j ++ 
         for(int j = i+e; j <length ; j++){
             e++;
             k++;
             if (j= length){
           cout<<numbers[j]<<"}"<<endl;
         }else{

          cout<<","<<numbers[j]

         }
        }
      }





   }

}




//get thenumbers
int *readNumbers(int n){
  int *arr=new int[n];

  for(int i = 0; i<n; ++i)
  {
    cin >> *(arr+i);
  }
 return arr;
}