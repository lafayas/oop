#include <iostream>
#include <stdlib.h>

extern void print_summed_matrices(int[3][3], int[3][3]);

int main(int argc, char **argv)
{
    int array1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int array2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    print_summed_matrices(array1, array2);
	return 0;
}