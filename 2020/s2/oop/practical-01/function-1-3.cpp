// function to ...
int count(int array[], int n, int num)
{
  int count = 0;
	if (n < 1)
{
	return 0;
}
	for (int i = 0; i < n; i++)
{
	if (array[i] == num)
{
  count = count + 1;
  return count;
}
}
	return 0;
}
