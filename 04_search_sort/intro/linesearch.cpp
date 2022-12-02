int linesearch(int arr[], int n, int key) 
{
	for (int x = 0; x < n; x++)
	{
		if (key == arr[x]) 
			return x;
	}
	return -1;
}
