// function to ...
int count(int array[], int n, int num)
{
	if (n < 1)
{
	return 0;
}
	for (int i = 0; i < n; i++)
{
	if (array[i] == num)
{
	return array[i];
}
}
	return 0;
}
