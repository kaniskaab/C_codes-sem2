#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack_arr[MAX];
int top=-1;
void push (int data){
    if(top==MAX){
        printf("Stack Overflow\n");
        return;
    }
    else{
    top++;
    stack_arr[top]=data;        
    }

}
int pop(){
    int value;
    if(top==-1){
        printf("Stack Underflown\n");
        exit(1);
    }
    else{
     value = stack_arr[top];
    top--;  
    }
   
    return value;
    
}
void print(){
    int i=0;
    if(top==-1){
        printf("Stack Underflown \n");
        return;
    }
    for(i=top;i>=0;i--){
        printf("%d\n",stack_arr[i]);
    }
}
int main(){
    int data,choice=0;
    push(23);
    push(9);
    char c='y';
    do{
    printf("Enter your choice\n1.Push\n2.Pop\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Before : \n");
        print();
        printf("Enter data: \n");
        scanf("%d",&data);
        push(data);
        printf("After push : \n");
        print();
        break;
        case 2:
        printf("Before : \n");
        print();
        data = pop();
        printf("After pop : \n");
        print();
        break;
        default: 
        printf("Error \n");

    }
    printf("Do you want to continue ? yes==y and no==n\n");
    scanf("%s",&c);
    }while(c=='y');
    return 0;

}