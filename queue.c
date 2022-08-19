#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start, *end;
struct node *define(struct node *head){
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;

    }
    start=head;
    end=temp;
    return head;

}
struct node *createNull(struct node *head, int data){
    struct node *new = malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    head=new;
    return head;

}
struct node *add(struct node *head, int data){
    struct node *new = malloc(sizeof(struct node));
    struct node *temp=head;
    new->data=data;
    new->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
    }
        
    
    temp->next=new;
    return head;
}
struct node *createNew(struct node *head){
    int size,value;
    printf("size: \n");
    scanf("%d",&size);
    printf("Enter data: \n");
    scanf("%d",&value);
    head=createNull(head,value);
    for(int i=1;i<size;i++){
        printf("Enter value : \n");
        scanf("%d",&value);
        head=add(head,value);
    }
    return head;
}
void print(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
struct node *createQueue(struct node *head){
    head=createNew(head);
    head=define(head);
    return head;
}
struct node *enqueue(int data){
    struct node *new= malloc(sizeof(struct node));
    new->data=data;
    new->next=NULL;
    end->next=new;
    end=new;
    return start;

}
struct node *dequeue(){
    struct node *temp=start;
    temp=temp->next;
    free(start);
    start=temp;
    return start;
}
int main(){
    struct node *head;
    int choice,value;
    char c='y';
    printf("Create a queue: \n");
    head=createQueue(head);
    printf("Queue created : \n");
    print(head);
    do{
    printf("Enter your choice\n1. Enqueue\n2. Dequeue\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter value : \n");
        scanf("%d",&value);
        head=enqueue(value);
        printf("After enqueue: \n");
        print(head);
        break;
        case 2:
        head=dequeue(value);
        printf("After dequeue: \n");
        print(head);
        break;
        default:
        printf("wrong input");
    }
    printf("Do you wish to continue ? y==yes  \n");
    scanf("%s",&c);
    }while(c=='y');
    return 0;

}