#include <stdio.h>
#include<stdlib.h>
int maxDiff(int a[],int n,int k){
    for(int i=0;i<n;i++){
        if(a[i]>k)
        a[i]=a[i]-k;
        else 
            a[i]=a[i]+k;
        
    }
     for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    int min=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }}
    
return max-min;
}
int main()
{
    int arr[]={3, 9, 12, 16, 20};
    printf("%d",maxDiff(arr,5,3));
    return 0;

}