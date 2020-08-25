#include <iostream>

using namespace std;


// get number
int *readNumbers(int n){
  int* arr = new int [n];
	for(int i = 0; i<n; ++i){
		cin >> *(arr+i);
	}

return arr;
}

// neagetive the numbers
int *negateArray(int *numbers,int length){
    int * newarr = new int[length];
    for (int i = 0; i<length; i++){
        newarr[i] = -numbers[i];  
    }
    
return newarr;

}



// print out
void printNumbers(int *numbers,int length){
    for (int i = 0; i< length; i ++){ 
       cout<<i<<" "<<numbers[i]<<endl;
    }
}