#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void bubble(int a[],int n){
    int temp=0;
    for(int round=1;round<n;round++){
        for(int j=0;j<n-round;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void iS(int a[],int n){
    int minIndex,value,i=0,j=0,flag=0;
    for(i=0;i<n;i++){
        minIndex=i;
        flag=1;
        for( j=i+1;j<n;j++){
            if(a[i]>a[j]){
                minIndex=j;
                value=a[i];
                a[i]=a[minIndex];
                a[minIndex]=value;

            }
        }
    }
    if(flag==0)
    return;

}
void insertionSort(int a[],int n){
    int i=0,j=0,temp,value,hole;
    for(i=1;i<n;i++){
        value=a[i];
        hole=i;
        while(hole>0&&a[hole-1]>value){
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=value;
    }
}void merge(int a[],int lb, int mid, int ub){
    int b[100];
    int i=lb, j=mid+1, k=lb;
    while(i<=mid&&j<=ub){
        if(a[i]<a[j]){
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
        }
    }
    while(i<=mid){
        b[k]=a[i];
        i++;
        k++;
    }
    for(int i=lb;i<=ub;i++){
        a[i]=b[i];
    }
}
void mergeS(int a[],int lb, int ub){
    if(lb<ub){
         int mid = (lb+ub)/2;
    mergeS( a,lb,mid);
    mergeS( a,mid+1,ub);
    merge(a,lb,mid,ub);
    }
   
}
int partition(int arr[],int lb,int ub){
    int start=lb;
    int pivot=arr[start];
    int end=ub;
    int temp,value;
    while(start<end){
        while(arr[start]<=pivot){
            start++;
        }
        while(arr[end]>pivot){
            end--;
        }
        if(start<end){
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    value=arr[lb];
    arr[lb]=arr[end];
    arr[end]=value;

    return end;
}
void quick(int arr[],int lb,int ub){
    if(lb<ub){
        int loc= partition(arr,lb,ub);
        quick(arr,lb,loc-1);
        quick(arr,loc+1,ub);
    }
}
int main(){
    int arr[]={5,8,3,7,5,1};
     int n = sizeof(arr)/sizeof(arr[0]);
     quick(arr,0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}