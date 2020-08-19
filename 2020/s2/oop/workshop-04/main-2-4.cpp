#include <iostream>
using namespace std;

extern float add_op(float left, float right); 
extern float subtract_op(float left, float right);
extern float multiply_op(float left, float right);
extern float arithmetic_ops(float left, float right, float (*op)(float,float));


int main()
{   
    string op;
    float left = 3.6;
    float right = 2.7;
    cout<< "Enter the operator: ";
    cin>> op;
    if (op == "+")
    {
        cout<<arithmetic_ops(left, right, &add_op)<<endl;
    }
    else if (op == "-")
    {
        cout<<arithmetic_ops(left, right, &subtract_op)<<endl;
    }
    else if (op == "*")
    {
        cout<<arithmetic_ops(left, right, &multiply_op)<<endl;
    }
    return 0;
}