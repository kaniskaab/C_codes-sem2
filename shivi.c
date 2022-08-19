#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int a[MAX];
int front =-1;
int isEmpty(){
    if(front==-1)
    return 1;
    else
    return 0;
}
int isFull(){
    if(front==MAX-1)
    return 1;
    else
    return 0;
}
void insert(int value){
    if(isFull()){
        printf("Stack is full\n");
    }
    else
    a[++front]=value;
}
int pop(){
    if(isEmpty()){
        printf("underflown\n");
    }
    else
    return a[front--];
}
struct node{
    int data;
    struct node* link;
};
struct node *addToEmpty(struct node *head, int value){
    struct node *new = malloc(sizeof(struct node));
    new->data=value;
    new->link=NULL;
    head=new;
    return head;
}
struct node *addNext(struct node *head,int value){
    struct node *new = malloc(sizeof(struct node));
    new->data=value;
    new->link=NULL;
    struct node *temp = head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=new;
    return head;
}
struct node *create(struct node *head){
    int size=MAX,value;
    printf("Enter element: \n");
    scanf("%d",&value);
    head=addToEmpty(head,value);
    for(int i=0;i<size-1;i++){
        printf("Enter value of node %d: \n",i+2);
        scanf("%d",&value);
        head=addNext(head,value);
    }
    return head;
}
void print(struct  node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp=temp->link;
    }
}
void addToStack(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        insert(temp->data);
        temp=temp->link;
    }
}
void addToList(struct node *head){
    struct node *temp=head;
    


}
void printArr(){
    for(int i=0;i<MAX;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    struct node *head,*new;
    head= create(head);
    print(head);
    addToStack(head);
    printArr();
    
    return 0;
}