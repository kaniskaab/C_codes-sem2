#include <stdio.h>
void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && a[left] > a[largest])
        largest = left;
    if (right < n && a[right] > a[largest])
        largest = right;
    if (largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n)
{
    printf("Using heap sort : \n");
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        int temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        heapify(a, i, 0);
    }
}
void merge(int a[], int beg, int mid, int end)
{
    int i, j, k;
    int n1 = mid - beg + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];
    for (int i = 0; i < n1; i++)
        LeftArray[i] = a[beg + i];
    for (int j = 0; j < n2; j++)
        RightArray[j] = a[mid + 1 + j];

    i = 0;
    j = 0;
    k = beg;

    while (i < n1 && j < n2)
    {
        if (LeftArray[i] <= RightArray[j])
        {
            a[k] = LeftArray[i];
            i++;
        }
        else
        {
            a[k] = RightArray[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        a[k] = LeftArray[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = RightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int a[], int beg, int end)
{
    if (beg < end)
    {
        int mid = (beg + end) / 2;
        mergeSort(a, beg, mid);
        mergeSort(a, mid + 1, end);
        merge(a, beg, mid, end);
    }
}
int partition (int a[], int start, int end)  
{  
    int pivot = a[end];
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++;
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  
void quick(int a[], int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        printf("%d", arr[i]);
        printf(" ");
    }
}

int main()
{
    int a[] = {0,2,1,2,0};
    int n = sizeof(a) / sizeof(a[0]);
    int choice;
    printf("Before Sorting : \n");
    printArr(a,n);
    printf("\n1What do you want to perfom ? \n1. Heap sort \n2. Merge sort \n3. Quick Sort\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        heapSort(a,n);
        printArr(a,n);
        break;
    case 2:
        mergeSort(a,0,n-1);
        printArr(a,n);
        break;
    case 3:
        quick(a,0,n-1);
        printArr(a,n);
        break;
    
    default:
        break;
    }
    return 0;
}