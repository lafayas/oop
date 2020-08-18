#include <iostream>
#include <string.h>
using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main()
{
    float left;
    cout<< "Enter the first number: ";
    cin>> left;
    float right;
    cout<< "Enter the second number: ";
    cin>> right;
    string op;
    cout<< "Enter the operator: ";
    cin>> op;
    cout<< add_op(left, right)<< endl;
    cout<< subtract_op(left, right)<< endl;
    cout<< arithmetic_ops(left, right, op)<< endl;
    return 0;
}