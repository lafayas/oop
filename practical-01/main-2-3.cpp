#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*, int);

int main(int argc, char **argv)
{
	int array[8] = {2, 2, 2, 2, 5, 5, 5, 9};
	std::cout << twofivenine(array, 8) << std::endl;
	return 0;
}
