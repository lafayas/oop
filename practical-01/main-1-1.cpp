#include <iostream>
#include <stdlib.h>
extern int sum_array(int*, int);
int main(int argc,char **argv)
{
	int array[5] = {1, 2, 3, 4, 5};
	std::cout << sum_array(array, 5) << std::endl;
	return 0;
}
