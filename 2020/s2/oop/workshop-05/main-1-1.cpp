#include <iostream>
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
extern void printer(int array[10][2]);

int main()
{   
    int array[10][2]={0, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10};
    printer(array);
    return 0;
    
}