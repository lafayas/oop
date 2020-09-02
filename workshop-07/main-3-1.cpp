#include <iostream>
using namespace std;
extern void printNumbers(int *numbers,int length);
extern int *readNumbers(int n); 
extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main()
{
    int n = 10;
    int length = n;
    int *numbers1 = new int [n];
    int *numbers2 = new int [n];
    numbers1 = readNumbers(n);
    numbers2 = readNumbers(n);
    equalsArray(numbers1, numbers2, length);
    delete [] numbers1;
    delete [] numbers2;
    return 0;
}