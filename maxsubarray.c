#include <stdio.h>
#include <stdlib.h>
int maxSum(int a[],int n){
    int sum =0;
    int store[n];
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        store[i]=sum;
    }
    int max=store[0];
    for(int i=1;i<n;i++){
        if(store[i]>max)
        max=store[i];
    }
    return max;
}
int main(){
    int arr[]={-1,-2,-3,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
    int new=maxSum(arr,n);
    printf("%d",new);

}