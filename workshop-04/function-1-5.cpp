int size_of_array_arr()
{
    
	int *arr = new int[3];
	int size_arr = 0;
	
	for (int i=0; i<3; i++)
	{
		size_arr = size_arr + sizeof(*arr);	
	}
	
	return size_arr;


}