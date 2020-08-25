#include <iostream>
#include <stdlib.h>
using namespace std;


extern int *readNumbers(int n );
extern void printNumbers(int *numbers,int length) ;
extern void grades(int *gradepoints,int length) ;

int main(int argc, char const *argv[]){
	// set up the length and pointer arry
	const int size = 4;
    int* grade = new int[size];
    //delivery value
	grade = readNumbers(size);
	grades(grade,size);
	//delete arr
	delete grade;
	return 0;
}
