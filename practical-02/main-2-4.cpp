#include <iostream>
extern int max_integer(int*, int);
extern int min_integer(int*, int);
extern int sum_min_and_max(int*, int);
int main(int argc,char **argv)
{
    int integers[5] = {1, 4, 3, 2, 2};
    std::cout << sum_min_and_max(integers, 5) << std::endl;
    return 0;
}