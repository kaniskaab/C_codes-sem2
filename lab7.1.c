#include <stdio.h>
#include <stdlib.h>
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void bubbleSort(int arr[], int size)
{
    int round, i, temp;
    for (round = 1; round <= size - 1; round++)
    {
        for (i = 0; i <= size - 1 - round; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int size)
{
    int min_index, temp;
    for (int i = 0; i < size; i++)
    {
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                min_index = j;
                temp = arr[i];
                arr[i] = arr[min_index];
                arr[min_index] = temp;
            }
        }
    }
}
void insertionSort(int arr[], int size)
{
    int i, hole, value;
    for (int i = 1; i < size; i++)
    {
        value = arr[i];
        hole = i;
        while (hole > 0 && arr[hole - 1] > value)
        {
            arr[hole] = arr[hole - 1];
            hole--;
        }
        arr[hole] = value;
    }
}
int main()
{
    int arr[10] = {23, 78, 22, 1, 90, 45, 76, 28, 18, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int choice;
    printf("Before Sorting : \n");
    print(arr,n);
    printf("\nWhat do you want to perfom ? \n1. Bubble sort \n2. Insertion sort \n3. Selection Sort\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        bubbleSort(arr,n);
        print(arr,n);
        break;
    case 2:
        insertionSort(arr,n);
        print(arr,n);
        break;
    case 3:
        selectionSort(arr,n);
        print(arr,n);
        break;
    
    default:
        break;
    }
    return 0;
    return 0;
}