#include <stdio.h>
void rearrangeNaive(int arr[], int n)
{
	int temp[n], i;
    for (i = 0; i < n; i++)
		temp[arr[i]] = i;
	for (i = 0; i < n; i++)
		arr[i] = temp[i];
}
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int arr[] = { 1, 3, 0, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Given array is \n");
	printArray(arr, n);

	rearrangeNaive(arr, n);

	printf("Modified array is \n");
	printArray(arr, n);
	return 0;
}
