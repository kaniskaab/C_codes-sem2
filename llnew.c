//singly linked list
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *addNull(struct node *head, int data){
    struct node *new = malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    head=new;
    return head;

}
struct node *addAtPos(struct node *head){
    int data;
    struct node *new = malloc(sizeof(struct node));
    printf("Enter data: \n");
    scanf("%d",&data);
    new->data=data;
    new->next=NULL;
    struct node *temp=head;
    int pos;
    printf("Enter position : \n");
    scanf("%d",&pos);
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    new->next=temp->next;
    temp->next=new;
    return head;

}
struct node *delAtPos(struct node *head){
    int pos;
    printf("Enter pos \n");
    scanf("%d",&pos);
    struct node *temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    temp->next=temp->next->next;
    return head;
}
struct node *addElement(struct node *head,int data){
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    struct node *ptr;
    ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
    return head;
}
struct node *create(struct node *head){
     int data,size,i;
     printf("size\n");
    scanf("%d",&size);
     printf("Enter data\n");
     scanf("%d",&data);
    head=addNull(head,data);
    for(i=1;i<size;i++){
        printf("Enter elements for :%d \n",i+1);
        scanf("%d",&data);
        head=addElement(head,data);
    }
    return head;
}
int main(){
    struct node *head= malloc(sizeof(struct node));
    int size;
    // printf("size\n");
    // scanf("%d",&size);
    head=create(head);
    // head=addAtPos(head);
    head=delAtPos(head);
    printf("ll is \n");
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }

    return 0;
}
