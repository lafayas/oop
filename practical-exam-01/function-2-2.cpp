int binary_to_number(int binary_digits[], int number_of_digits)
{
    int a = 0;
    for (int i = 0; i < number_of_digits; i++)
    {
        a |= binary_digits[i] << (number_of_digits -1 -i);
    }
    return a;
}