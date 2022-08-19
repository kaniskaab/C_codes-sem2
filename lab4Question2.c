#include <stdio.h>
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
    for(int i=0;i<size;i++){
        if(arr[i]!=0)
        arr[temp++]=arr[i];
    }
    while(temp<size){
        arr[temp++]=0;
    }
     printf("\nThe arrays after sorting is: \n");
     for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}