#include <iostream>
using namespace std;


extern int *readNumbers(int n) ;
extern int *negateArray(int *numbers,int length) ; 
extern void printNumbers(int *numbers,int length) ;

int main(int argc, char const *argv[]){
	// set up the length and pointer arry
	const int size=5;
    int* arr1 = new int[size];
    int* arr2 = new int[size];
    //delivery value
    arr1 = readNumbers(size);	
    arr2 = negateArray(arr1,size);
    printNumbers(arr2, size);
    //delete arr
    delete arr1;
    delete arr2;

	return 0;

}
