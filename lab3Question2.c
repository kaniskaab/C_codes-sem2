#include <stdio.h>
int main(){
    int size=0 , arr[100];
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter value of elements:\n");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is : \n");
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    int temp = arr[size-1];
    for(int i=0;i<size;i++){
        arr[size-i-1]=arr[size-i-2];
    }
    arr[0]=temp;
    printf("\nThe array after rotation is : \n");
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}