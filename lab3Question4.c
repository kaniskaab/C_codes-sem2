#include <stdio.h>
int main(){
    int size, arr[100],temp;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    printf("Enter elements of array: \n");
    for(int i=0; i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is : \n");
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    for(int i=0;i<(size/2);i++){
        temp=arr[size-i-1];
        arr[size-i-1]=arr[i];
        arr[i]=temp;
    }
    printf("\nAfter reversal : \n");
    for(int i=0; i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}