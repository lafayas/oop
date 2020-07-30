#include <iostream>
#include <stdlib.h>

extern void passorfail(char grade);

int main(int argc,char **argv)
{
	//char grade = 'C';
	passorfail('C');
	return 0 ;
}