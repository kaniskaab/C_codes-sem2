#include <stdio.h>
#include <stdlib.h>
void merge(int arr[],int start,int mid,int end){
    int left = mid-start+1;
    int right=end-mid;
    int arr1[left];
    int arr2[right];
    for(int i=0;i<left;i++){
        arr1[i]=arr[i];
    }
    for(int j=0;j<right;j++){
        arr2[j]=arr[mid+1+j];
    }
    int i=0,j=0,k=start;
    while (i<left&&j<right)
    {
       if (arr1[i]<=arr2[i])
       {
        arr[k]=arr1[i];
        i++;
       }
       else
       {
        arr[k]=arr2[j];
        j++;
       }
       k++;
       
    }
    while(i<left){
        arr[k]=arr1[i];
        i++;
        k++;
    }
     while(j<right){
        arr[k]=arr2[j];
        j++;
        k++;
    }
    
}
void mergeSort(int arr[],int start,int end){
    if(start<end){
         int mid = (start+end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
    }
   
}
int main (){
    int arr[]={32,76,43,98,12,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    n--;
    mergeSort(arr,0,n);
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}