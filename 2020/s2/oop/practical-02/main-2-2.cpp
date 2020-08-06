#include <iostream>
extern int binary_to_number(int);
int main(int argc,char **argv)
{
    int binary_digits[5] = {1, 0, 0, 1, 0};
    std::cout << binary_digits(binary_digits, 5) << std::endl;
    return 0;
}