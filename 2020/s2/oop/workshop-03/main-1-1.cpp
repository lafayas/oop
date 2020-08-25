#include <iostream>
extern void printer(int[10][10]);
int main()
{
    int array[10][10]={1, 2, 3, 4, 1, 2, 3, 4, 1, 2,
 1, 0, 0, 0 0 1 0 0 0 0
 1 2 3 4 1 2 3 4 1 2
 1 0 7 0 0 1 0 3 0 0
 1 2 3 4 1 2 3 4 1 2
 1 0 0 0 0 1 0 0 0 0
 1 2 3 4 1 2 3 4 1 2
 1 0 7 0 0 1 0 3 0 0
 1 0 0 0 0 1 0 0 0 0
> 1 2 3 4 1 2 3 4 1 2};
    printer(array);

    return array;

}