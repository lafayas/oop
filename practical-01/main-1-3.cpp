#include <iostream>
#include <stdlib.h>

extern int count(int*, int, int);

int main(int argc, char **argv)
{
	int array[5] = {1, 2, 3, 4 ,5};
	std::cout << count(array, 5, 3) << std::endl;	
	return 0;
}
