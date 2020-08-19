#include <iostream>
using namespace std;
extern void print_sevens(int *nums,int length);

int main()
{   
    int length = 3;
    int nums[3] = {7, 14, 21};
    print_sevens(nums, length);
    return 0;
}