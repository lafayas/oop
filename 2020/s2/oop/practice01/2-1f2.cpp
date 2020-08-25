#include <iostream>
#include <stdlib.h>
using namespace std; 

const int size = 10;
// print out
void printNumbers(string *grade,int length, int* nums){

    for (int i = 0; i< length; i ++){ 
       cout<<i<<" "<<nums[i]<<" "<<grade[i]<<endl;
    }
}
// swith the score to grade
void grades(int *gradepoints,int length){

   string res[length];
   string* grade;
// swith the score 
  for(int i = 0 ; i < length ; i++){
   
   switch (gradepoints[i]){

    case 1 :
      res[i]= "Fail";
      break;

    case 2 :
      res[i]="Pass";
      break;
    
    case 3 :
      res[i]= "Credit";
      break;
    
    case 4 :
      res[i]="Distinction" ;
      break;

    case 5 :
      res[i]="Higher Distinction";
      break;

    
   }
 }
  // call function to print
  grade = &res[0];
  printNumbers(grade, length, gradepoints);
}



// get the number
int *readNumbers(int n ) {
  int* arr = new int[n];
    for(int i = 0; i<n; i++){ 
      cin>>arr[i];  
    }       
       return arr;
}