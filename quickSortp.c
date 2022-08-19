#include <stdio.h>
#include <stdlib.h>
int partition(int a[],int start, int end){
    int pivot = a[end];
    int index=start;
    int i;
    for(i=start;i<=end;i++){
        if(a[i]<pivot){
            int temp=a[index];
            a[index]=a[i];
            a[i]=temp;
            index++;
        }
    }
    int temp=a[end];
    a[end]=a[index];
    a[index]=temp;

    return index;
}
int quick(int a[],int start,int end){
    if(start<end)//dont forget about this condition
    {
           int point;
    point=partition(a,start,end);
    quick(a,start,point-1);
    quick(a,point+1,end);
}
    }
int main(){
    int arr[]={3,89,54,90,34,18,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
 