#include <stdio.h>
int main(){
    int size, arr[100],i,temp=0;
    printf("Enter size of array : \n");
    scanf("%d",&size);
    printf("Enter elements :\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            arr[temp++]=arr[i];
        }
    }
    while(temp<size){
            arr[temp++]=0;
    }
  
    printf("the array");
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }  
    return 0;
}