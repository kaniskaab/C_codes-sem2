#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char str[20];
int top=-1;
int priotity(char x){
    if (x=='(')
    return 0;
    else if(x=='+'||x=='-')
    return 1;
    else if(x=='/'||x=='*')
    return 2;
}
void push(char x){
    top++;
    str[top]=x;
}
char pop(){
    char x= str[top];
    top--;
    return x;
}
int main(){
    int arr[20];
    char x;
    printf("Enter string : \n");
    scanf("%s",&arr);
    char *e;
    e=arr;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(e=='('){
            push(*e);
        }
        else if(e==')'){
            while((x=pop())!='('){
                printf("%c",pop());
                e++;
            }
        }
        else {
        while(priotity(str[top])>=priotity(*e))
            printf("%c",pop());
            push(*e);}
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }
    return 0;
}