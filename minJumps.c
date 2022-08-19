#include <stdio.h>
#include <stdlib.h>
int minJumps(int a[], int n){
    if(n==0)
    return -1;
    else{
    int temp,round=0,i=0;
    while(i<n-1){
        temp=a[i];
        i=i+temp;
        round++;
    }
    return round;}
}
int main(){
    int arr[]={1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("%d",minJumps(arr,n));
    return 0;
}