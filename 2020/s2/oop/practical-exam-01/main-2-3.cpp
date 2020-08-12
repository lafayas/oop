#include <iostream>
extern bool is_a_palindrome(int*, int);
extern int sum_elements(int*, int);
extern int sum_if_a_palindrome(int*, int);
int main(int argc,char **argv)
{
    int integers[5] = {1, 4, 3, 2, 2};
    std::cout << sum_if_a_palindrome(integers, 5) << std::endl;
    return 0;
}