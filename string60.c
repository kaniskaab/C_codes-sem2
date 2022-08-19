#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<strings.h>
int isRotation(char *str1,char *str2){
    // char *temp;
    void *ptr;
    int size1= strlen(str1);
    int size2 = strlen(str2);
    if(size1!=size2)
    return 0;
    char *temp=malloc(sizeof(char)*(size1*2+1));
    // temp[0]= '';
    strcat(temp,str1);
    strcat(temp,str1);
    ptr=strstr(temp,str2);
    if(ptr!=NULL){
        return 1;
    }
    else 
    return 0;



    

}
int main(){
    char arr1[]="abcd";
    char arr2[]="badc";
    printf("%d",isRotation(arr1,arr2));
    return 0;
}