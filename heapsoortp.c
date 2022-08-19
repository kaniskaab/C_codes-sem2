#include<stdio.h>
#include <stdlib.h>
heapify(int arr[],int n, int i){
    int left= 2*i+1;
    int right = 2*i+2;
    int largest=i;
    while(left<n&& arr[left]>arr[largest])
    largest=left;
    while(right<n&&arr[right]>arr[largest])
    largest=right;
    if(largest!=i){
        int temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }

}
heapSort(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        int temp=arr[i];
        arr[i]=arr[0];
        arr[0]=temp;

        heapify(arr,i,0);
    }
}
int main (){
    int arr[]={32,76,43,98,12,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    heapSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}