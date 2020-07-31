#include <stdlib.h>
#include <iostream>


extern double sumeven(double*,int);

int main(int argc,char **argv)
{
	double array[6] = {1, 2, 3, 4 ,5, 6};
	std::cout << sumeven(array, 6) << std::endl;
	return 0 ;
}