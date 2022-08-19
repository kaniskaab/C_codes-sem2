#include <stdio.h>
#include<stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
void print(struct node *head){
    struct node *ptr=head;
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int nodes(struct node *head){
    int n=0;
    struct node *ptr=head;
    while(ptr!=NULL){
    n++;
    ptr=ptr->next;
}
return n;
}
struct node *addToEmpty(struct node *head, int data){
    struct node *temp= malloc(sizeof(struct node));
    temp->prev= NULL;
    temp->data= data;
    temp->next = NULL;
    head= temp;
    return head;

}
struct node *addAtEnd( struct node *head, int data){
    struct node *temp, *tp;
    temp= malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    tp=head;
    while( tp->next != NULL){
        tp= tp->next;
       
    }
    tp->next=temp;
    temp->prev=tp;
    return head;
}
int main(){
    struct node *head= NULL;
    int size;
    head = addToEmpty(head , 80);
    head = addAtEnd(head ,49);
    head = addAtEnd(head ,21);
    head = addAtEnd(head ,9);
    printf("List: \n");
    print(head);
    size = nodes(head);
    printf("Number of nodes  ==  %d",size);
    return 0;
    }