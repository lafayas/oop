#include <iostream>

using namespace std;

// get number
int *readNumbers(int n){
 
	int *arr=new int[n];

	for(int i = 0; i<n; ++i)
	{
		cin >> *(arr+i);

	}
return arr;
}


// compare the number
bool equalsArray(int *A,int *B,int length){

	bool res = false;
    int count = 0;
    if(length>1){
       for(int i = 0 ; i < length; i++){
            if(A[i]==B[i]){
              count++;
            }
        }
    }
     
    if (count == length){
     res =true;
    } 

    return res;
}