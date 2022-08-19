#include <stdio.h>
#include <stdlib.h>
void rotate(int a[],int n){
    int temp=a[n-1];
    int i=0;
    while(i<n){
        a[i+1]=a[i];
        i++;
    }
    a[0]=temp;
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    
}
int main(){
    int a[]={1,2,8,9,12};
    int n= sizeof(a)/sizeof(a[0]);
    int temp=a[n-1];
    int i=0;
    while(i<n){
        a[i+1]=a[i];
        i++;
    }
    a[0]=temp;
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);}

    return 0;
}