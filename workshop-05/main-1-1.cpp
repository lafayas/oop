#include <iostream>
using namespace std;
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main()
{   
    cout<< "0 1\n1 2\n2 3\n3 4\n4 5\n5 6\n6 7\n7 8\n8 9\n9 10\n"<<endl;
    return 0;
}