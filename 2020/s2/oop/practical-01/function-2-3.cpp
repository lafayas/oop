void twofivenine(int array[], int n)
{
	int num_twos = 0;
	int num_fives = 0;
	int num_nines = 0;
	for (int i = 0; i < n; i++)
{
	if (array[i] == 2)
{
	num_twos = num_twos + 1;
}
else if (array[i] == 5)
{
	num_fives = num_fives + 1;
}
else if (array[i] == 9)
{
	num_nines = num_nines + 1;
}
}
}
