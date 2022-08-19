#include <stdio.h>
#include <stdlib.h>
int kadane(int a[],int n){
    int new[n], sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        new[i]=sum;
    }
    // for(int i=0;i<n;i++){
    //     printf("%d\t",new[i]);
    // }
    int max=new[0];
    for(int i=1;i<n;i++){
        if(new[i]>max){
            max=new[i];
        }
    }
    // printf("%d",max);
    return max;
}
int main(){
    int Arr[] ={1,2,3,-2,5};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    printf("%d",kadane(Arr,n));
}