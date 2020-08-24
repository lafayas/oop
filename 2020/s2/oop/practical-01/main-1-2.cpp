#include <iostream>
#include <stdlib.h>

extern double average(int*, int);

int main(int argc, char **argv)
{
	int array[5] = {1, 2, 3, 4, 5};
	std::cout << average(array, 5) << std::endl;
	return 20;
}
