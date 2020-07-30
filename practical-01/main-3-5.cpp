#include <stdlib.h>
#include <iostream>


extern double sumeven(double*,int);

int main(int argc,char **argv)
{
	double array[5] = {1, 2, 3, 4 ,5};
	std::cout << sumeven(array, 5) << std::endl;
	return 0 ;
}