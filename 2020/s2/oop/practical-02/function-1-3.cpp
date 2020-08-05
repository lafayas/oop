#include <iostream>
using namespace std;
void count_numbers(int array[4][4])
{   
    int num_ones = 0;
	int num_twos = 0;
	int num_threes = 0;
	int num_fours = 0;
	int num_fives = 0;
	int num_sixs = 0;
	int num_sevens = 0;
	int num_eights = 0;
	int num_nines = 0;
	int num_zeros = 0;
	
for (int i = 0; i < 4; i++)
{
    for (int j = 0; j < 4; j++)
        if (array[i][j] == 2)
        {
	        num_twos = num_twos + 1;
        }
        else if (array[i][j] == 5)
        {
	        num_fives = num_fives + 1;
        }
        else if (array[i][j] == 9)
        {
	        num_nines = num_nines + 1;
        }
        else if (array[i][j] == 3)
        {
            num_threes = num_threes + 1;
        }
        else if (array[i][j] == 0)
        {
            num_zeros = num_zeros + 1;  
        }
        else if (array[i][j] == 4)
        {
            num_fours = num_fours + 1;  
        }
        else if (array[i][j] == 6)
        {
            num_sixs = num_sixs + 1;
        }
        else if (array[i][j] == 7)
        {
            num_sevens = num_sevens + 1;  
        }
        else if (array[i][j] == 8)
        {
            num_eights = num_eights + 1;
        }
        else if (array[i][j] == 1)
        {
            num_ones = num_ones + 1;
        }
    
}

	cout << "1:" << num_ones << ";";
	cout << "2:" << num_twos << ";";
	cout << "3:" << num_threes << ";";
	cout << "4:" << num_fours << ";";
	cout << "5:" << num_fives << ";";
	cout << "6:" << num_sixs << ";";
	cout << "7:" << num_sevens << ";";
	cout << "8:" << num_eights << ";";
	cout << "9:" << num_nines << ";";
	cout << "0:" << num_zeros << ";";
	cout << "\n";
}