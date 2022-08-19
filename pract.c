#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
struct node* insertnew(struct node *head, int value){
   struct node *temp;
   struct node *newNode=malloc(sizeof(struct node));
   newNode->prev=NULL;
   newNode->data=value;
   newNode->next=NULL;
   head=newNode;
   return head;


   }
struct node *insertend(struct node *head, int value){
    struct node *temp;
    struct node *newNode=malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->data=value;
    newNode->next=NULL;
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    return head;
}
struct node *insertbeg(struct node *head, int value){
    struct node *newNode=malloc(sizeof(struct node));
    newNode->prev=NULL;
    newNode->data=value;
    newNode->next=NULL;
    newNode->next= head;
    head->prev=newNode;
    head=newNode; 
    
    return head;
}
void print(struct node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
}
int main(){
    struct node *head= malloc(sizeof(struct node));
    head=NULL;
    head = insertnew(head,54);
    head= insertend(head, 12);
    head = insertbeg(head , 1);

    print(head);
    return 0;
    
}