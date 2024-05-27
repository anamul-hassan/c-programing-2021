int main()
{
	int arr[] = {2, 5, -7, 44, 77, -2, 9, 10};
	int n;
	n = sizeof(arr) / sizeof(arr[0]);

	printArray(arr, n);

	printf("Count of Positive elements = %d\n",
		countPositiveNumbers(arr, n));
	// printf("Count of Negative elements = %d\n",
	// 	countNegativeNumbers(arr, n));