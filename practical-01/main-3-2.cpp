#include <iostream>
#include <stdlib.h>

extern int median(int*,int);

int main(int argc,char **argv)
{
	int array[5] = {1, 3, 4, 5, 2};
	std::cout << median(array, 5) << std::endl;
	return 0 ;
}
