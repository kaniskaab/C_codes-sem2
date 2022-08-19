#include <stdio.h>
#include <ctype.h>
#define MAX 20
char stack[MAX];
int top=-1;
void push(char x){
    if(top==MAX-1){
        printf("Stack is full.\n");
    }
    else{
        top++;
        stack[top]=x;
    }

}
char pop(){
    char value;
    if(top==-1)
    printf("Empty stack");
    else
    value=stack[top];
    top--;
    return value;

}
int priority(char x){
    if(x=='(')
    return 0;
    if(x=='+'||x=='-')
    return 1;
    if(x=='/'||x=='*')
    return 2;
    return 0;
}
int main(){
    char x;
    char a[20], *e;
    printf("Enter expression: \n");
    scanf("%s",&a);
    e=a;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e==')'){
            while((x=pop())!='('){
                printf("%c",pop());
            }
        }
        else {
            while(priority(stack[top])>=priority(*e))
            printf("%c",pop());
            push(*e);

        }
   
   e++; }
   while (top!=-1)
   {
   printf("%c",pop());
   }
   return 0;

}