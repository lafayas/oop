// function to ...
int sum_array(int array[], int n)
{
  int sum = 0;
  if (n < 1)
{
  return sum;
}
  
  for (int i = 0; i < n; i++)
{
  sum += array[i-1];
}
  return sum;
}
