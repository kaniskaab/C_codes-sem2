#include <stdio.h>
#include <stdlib.h>
int insetion(int a[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                min_index=j;
                int temp=a[i];
                a[i]=a[min_index];
                a[min_index]=temp;
            }
        }
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);

    }
    
}
int main(){
    int a[]={-1, 2, -3, 4, 5, 6, -7, 8, 9};
    int n = sizeof(a)/sizeof(a[0]);
    insetion(a,n);
    print(a,n);
}