#include <iostream>
extern bool is_a_palindrome(int*, int);
extern int sum_elements(int*, int);
extern int sum_if_a_palindrome(int*, int);
int main()
{
    int integers[5] = {3, 4, 5, 4, 3};
    std::cout << sum_if_a_palindrome(integers, 5) << std::endl;
    return 0;
}