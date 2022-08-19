#include <stdio.h>
#include <stdlib.h>
int partition(int a[],int lb, int ub){
    int start=lb;
    int pivot=a[start] ; 
     int end=ub;
    while(start<end){
        while(a[start]<=pivot){
            start++;
        }
        while(a[end]>pivot){
            end--;
        }
        if(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int new=a[lb];
    a[lb]=a[end];
    a[end]=new;

    return end;
}
void quickSort(int a[],int lb,int ub){
    if(lb<ub){
        int loc=partition(a,lb,ub);
        quickSort(a,lb,loc-1);
        quickSort(a,loc+1,ub);
    }

}
int main(){
    int a[]={3,8,98,51,2,0,7};
    int size = sizeof(a)/sizeof(a[0]);
    quickSort(a,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
}