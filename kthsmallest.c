#include <stdio.h>
#include <stdlib.h>
int kthSmallest(int arr[], int l, int r, int k)
    {
        int temp;
        for(int i=r+1;i<=l;i++){
            for(int j=r;j<=l-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        return arr[k-1];
        
    }
int main(){
    int arr[5]={12, 15, 13 , 1 , 2};
    int new;
    new=kthSmallest(arr,4,0,3);
    printf("%d",new);
    return 0;

}