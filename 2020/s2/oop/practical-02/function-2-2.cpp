int binary_to_number(int binary_digits[], int number_of_digits)
{
    int ret = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        ret |= binary_digits[i] << (number_of_digits - i - 1);
    }
    return ret;
}