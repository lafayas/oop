// function to ...
bool ascending(int array[], int n)
{
	char a = true;
	char b = false;
	if (n <= 0)
{
	return b;
}
	for (int i = 0; i < n; i++)
{
	if ((array[i] > array[i-1]) || (array[i] == array[i-1]))
{
	return a;
}
}
}
