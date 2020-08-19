#include <iostream>
using namespace std;
extern void cpyia(int old_array[],int new_array[],int length);

int main()
{   
    int length = 3;
    int old_array[length] = {1, 2, 3};
    int new_array[length];
    cpyia(old_array, new_array, length);
    return 0;
}