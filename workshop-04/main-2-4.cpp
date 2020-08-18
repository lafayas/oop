#include <iostream>
using namespace std;

extern float multiply_op(float left, float right);

int main()
{
    float left;
    cout<< "Enter the first number: ";
    cin>> left;
    float right;
    cout<< "Enter the second number: ";
    cin>> right;
    
    cout<< multiply_op(left, right) << endl;
    return 0;
}