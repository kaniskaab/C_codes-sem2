#include <stdio.h>
#include <stdlib.h>
void merge(int a[],int lb,int mid,int ub){
    int b[100];
    int i=lb;
    int j=mid+1;
    int k=lb;
    while(i<=mid&&j<=ub){
        if(a[i]<=a[j]){
            b[k]=a[i];
            i++;    
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid){
        while(j<=ub){
            b[k]=a[j];
            j++;
            k++;
        }}
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;
            k++;
        }
    }
    for(int i=lb;i<=ub;i++){
        a[i]=b[i];
    }
}
void mergeSort(int a[],int lb,int ub){
    
    if(lb<ub){
        int mid=(lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int a[]={3,8,98,51,2,0,7};
    int size = sizeof(a)/sizeof(a[0]);
    mergeSort(a,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d\t",a[i]);
    }
    return 0;
}
