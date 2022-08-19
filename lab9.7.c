#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[],int top,int end, int element){
    int mid=(top+end)/2;
    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]<element){
        top=mid+1;
    }
    else if(arr[mid]>element){
        end=mid-1;
    }
    binarySearch(arr,top,end,element);
}
int main(){
    int element;
    int arr[]={6,45,90,123,231,786};
    int size = sizeof(arr)/sizeof(arr[0]);
    int top=0, end = size;
    printf("Enter element : \n");
    scanf("%d",&element);
    printf("The index of element %d is %d",element,binarySearch(arr,top,end,element));
    return 0;
}