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
struct node *addElement(struct node *head,int data){
    struct node *new=malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    struct node *ptr=head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    ptr->next=new;
    return head;
}
struct node *create(struct node *head){
     int data=0,data,size,i=1;
     printf("size\n");
    scanf("%d",size);
     printf("Enter data\n");
     scanf("%d",&data);
    head=addNull(head,data);
    while(i<size){
        scanf("%d",&data);
        head=addElement(head,data);
        i++;
    }
    return head;
}
int main(){
    struct node *head= malloc(sizeof(struct node));
    struct node *newhead= malloc(sizeof(struct node));
    int size;
    printf("size\n");
    scanf("%d",size);
    newhead=create(head);
    // while(newhead!=NULL){
    //     printf("%d",newhead->data);
    //     newhead=newhead->next;
    // }
    return 0;
}
