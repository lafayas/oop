#include <iostream>
#include <stdlib.h>
#include <string>


extern void print_as_binary(std::string decimal_number);

int main(int argc, char **argv)
{
    std::string decimal_number = "23";
    print_as_binary(decimal_number);
    printf("\n");
	return 0;
}