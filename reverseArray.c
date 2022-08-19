#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#define MAX 100
int main(){
    char a[MAX];
    char temp;
    printf("Enter array: \n");
    fgets(a,MAX,stdin);
   
    int size=strlen(a);
    int end = size;
   for(int i=0;i<size/2;i++){
    temp=a[i];
    a[i]=a[size-1-i];
    a[size-1-i]=temp;
   }
   printf("%s",a);
    return 0;

}