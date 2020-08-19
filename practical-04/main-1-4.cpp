#include <iostream>
using namespace std;
extern void cpyda(double *old_array,double *new_array,int length);

int main()
{
    int length = 3;
    double old_array[3] = {1.0, 2.3, 3.4};
    double *new_array = new double[3];
    cpyda(old_array, new_array, length);
    return 0;
}