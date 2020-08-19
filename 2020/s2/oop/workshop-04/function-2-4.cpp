#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
using namespace std;

float multiply_op(float left, float right)
{

    float res;
    res = left * right;
    return res;
}

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

float arithmetic_ops(float left, float right, float (*op)(float,float))
{
		return op(left, right);
}