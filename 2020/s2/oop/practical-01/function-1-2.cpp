//function to ...
double average(int array[], int n)
{
	int sum = 0;
	if (n < 1)
{
	return 0;
}
	for (int i = 0; i < n; i++)
{
	sum += array[i];
}
	double average = sum / n;
	return average;
}
