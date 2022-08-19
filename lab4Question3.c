#include <stdio.h>
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int size, arr[100],temp=0;
    printf("Enter size of the array: \n");
    scanf("%d",&size);
    printf("Enter the elements: \n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The arrays is: \n");
     for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    for (int i = 1; i < size; i++)
    {
         if (i % 2 == 0)
        {
            if (arr[i] > arr[i - 1])
            {
                swap(&arr[i - 1], &arr[i]);
            }
        }
        else
        {
            if (arr[i] < arr[i - 1])
            {
                swap(&arr[i - 1], &arr[i]);
            }
        }
    }
    printf("\n The arrays is: \n");
     for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}