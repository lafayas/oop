#include <iostream>
#include <stdlib.h>

extern double weightedaverage(int*,int);

int main(int argc,char **argv)
{
	int array[10] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5};
	std::cout << weightedaverage(array, 5) << std::endl;
	return 0 ;
}
