#include <iostream>
float add_op(float left, float right)
{   
    float res;
    res = left + right;
    return res;
}

float subtract_op(float left, float right)
{
    float res;
    res = left - right;
    return res;
}

float arithmetic_ops(float left, float right, std::string op)
{
    float res;
    if (op == "+")
    {
        res = left + right;
    }
    else if (op == "-")
    {
        res = left - right;
    }
    return res;
}