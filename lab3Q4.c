#include <stdio.h>
int main()
{
    int size,size1,size2, arr[100],arr1[100],arr2[100];
    printf("Enter the size of 1st array:\n");
    scanf("%d", &size);
    printf("Enter value of elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the size of 2nd array:\n");
    scanf("%d", &size1);
    printf("Enter value of elements:\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of 3rd array:\n");
    scanf("%d", &size2);
    printf("Enter value of elements:\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The 1st array is : \n");
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe 2nd array is : \n");
    for(int i=0; i<size1;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe 3rd array is : \n");
    for(int i=0; i<size2;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nThe common values are : \n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size1;j++){
            if(arr[i]==arr1[j]){
                for(int k=0;k<size2;k++){
                    if(arr1[j]==arr2[k]){
                        printf("%d\t",arr2[k]);
                    }
                }
            }
        }
    }
    return 0;
}
