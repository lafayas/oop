#include <iostream>
#include <stdlib.h>

extern void count_numbers(int[4][4]);

int main(int argc, char **argv)
{
	int array[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 2, 3, 4, 5, 6, 1};
	count_numbers(array);
	std::cout<<"\n";
	return 0;
}
