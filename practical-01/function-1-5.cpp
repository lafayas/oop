// function to..
int count_even(int number)
{
	if (number < 1)
{
	return 0;
}
	int count = 0;
	int n[5];
	for (int i = 1; i < number; i++)
{
	if (n[i] % 2 == 0)
{
	count = count + 1;
}
}
	return count;	
}
