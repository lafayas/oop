#include <iostream>
extern int diagonal(int[4][4]);
int main()
{
    int array[4][4] = {1, 2, 3, 4, 
                       5, 6, 7, 8,
                       9, 1, 3, 5,
                       0, 9, 8, 6};
    std::cout << diagonal(array);
    return 0;
}