#include <stdio.h>
#include <stdlib.h>
int linearSearch(int arr[],int size,int elements){
    for(int i=0;i<size;i++){
        if(arr[i]==elements)
        return i;
    }
    return -1;
}
int main(){
    int arr[]= {76,89,2,76,90,49,27,93,72,0,23,29};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element;
    printf("Enter element that you want to search : \n");
    scanf("%d",&element);
    printf("The position of element %d is index %d\n",element,linearSearch(arr,size,element));
    return 0;
}