#include <iostream>
#include <stdlib.h>

extern int count_even(int);

int main(int argc, char **argv)
{
	int number = 5;
	std::cout << count_even(number) << std::endl;
	return 0;
}
