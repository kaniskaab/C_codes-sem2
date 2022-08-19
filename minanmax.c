#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(){
    int a[MAX];
    int size;
    int min,max;
    printf("Enter size\n");
    scanf("%d",&size);
    printf("Enter elements\n");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
   min=a[0];
    for(int i=1;i<size;i++){
        if(a[i]<a[0])
        min=a[i];
    }
    max=a[0];
    for(int i=1;i<size;i++){
        if(a[i]>a[0])
        max=a[i];
    }
    printf("Max and min = %d %d ", max,min);
    return 0;
}