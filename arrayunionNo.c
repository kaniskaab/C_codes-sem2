#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int m){
    for(int round=1;round<m;round++){
        for(int i=0;i<m-round;i++){
            if(a[i]>a[i+1]){
                a[i]=a[i]+a[i+1];
                a[i+1]=a[i]-a[i+1];
                a[i]=a[i]-a[i+1];
            }
        }
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    
}
void fun(int a[],int b[],int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i]>b[j])
            {
                a[i]=a[i]+b[j];
                b[j]=a[i]-b[j];
                a[i]=a[i]-b[j];
            }
        }
    }
    // merge(a,m);
    print(a,m);
    merge(b,n);
    print(b,n);

    
}
int main(){
int arr1[] = {1, 3, 5, 7};
int arr2[] = {0, 2, 6, 8, 9};
int m=sizeof(arr1)/sizeof(arr1[0]);
int n= sizeof(arr2)/sizeof(arr2[0]);
fun(arr1,arr2,m,n);
}