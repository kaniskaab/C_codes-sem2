#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* addNew(struct node * head, int value){
    struct node *temp = malloc(sizeof(struct node));
    temp->data= value;
    temp->next= NULL;
    head=temp;
    return head;
}
struct node * addToEnd(struct node *head, int value){
    struct node *temp;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    
    if(head->next==NULL){
        head->next=newNode;
        newNode->next=head;
        return head;
    }
    else {
    temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;
    return head;
    }
}
struct node *delete(struct node *head){
    struct node *temp=head;
    while(temp->next->next!=head){
        temp=temp->next;
    }
    temp->next=head;
    return head;

}
void print(struct node *head){
    struct node *temp;
    temp=head;
    while(temp->next!=head){
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
struct node * createList(struct node *head){
    int n, data,i;
    printf("Enter the number of nodes: \n");
    scanf("%d",&n);
    if(n==0)
    return head;
    printf("Enter the elements for node 1: ");
    scanf("%d",&data);
    head = addNew(head,data);
    for(i=1;i<n;i++){
        printf("Enter the elements for the node %d : ",i+1);
        scanf("%d",&data);
        head = addToEnd(head, data);
    }
    return head;
}
int main(){
    struct node *head;
    int choice,value=0;
    char c='y';
    do{
    printf("ENTER YOUR CHOICE : \n1. CREATION \n2. INSERTION \n3. DELETION\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        head= createList(head);
        print(head);
        break;
        case 2:
        printf("List before insertion :\n");
        print(head);
        printf("\nEnter value : \n");
        scanf("%d",&value);
        head = addToEnd(head,value);
        printf("List after insertion: \n");
        print(head);
        break;
        case 3:
        printf("List before deletion:\n");
        print(head);
        printf("\nList after deletion: \n");
        head = delete(head);
        print(head);
        break;
        default:
        printf("Wrong Input.");
    }
    printf("\nDo you want to continue ? y==yes and n==no \n");
    scanf("%s",&c);
    }while(c=='y');
    return 0;
}