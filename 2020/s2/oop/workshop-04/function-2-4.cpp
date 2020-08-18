float multiply_op(float left, float right)
{

    float res;
    res = left * right;
    return res;
}

float arithmetic_ops(float left, float right, float (*op)(float,float))
{
		return (*op)(left, right);
}