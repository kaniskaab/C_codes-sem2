#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
void print(struct node *head){
    struct node *ptr=head;
    printf("\n\n");
    while(ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
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
struct node *delLast(struct node *head){
    struct node *temp = head;
    struct node *temp2;
    while(temp->next!=NULL){
        temp=temp->next;
        }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
    return head;
}
struct node * createList(struct node *head){
    int n, data,i;
    printf("Enter the number of nodes: \n");
    scanf("%d",&n);
    if(n==0)
    return head;
    printf("Enter the elements for node 1: ");
    scanf("%d",&data);
    head = addToEmpty(head,data);
    for(i=1;i<n;i++){
        printf("Enter the elements for the node %d : ",i+1);
        scanf("%d",&data);
        head = addAtEnd(head, data);
    }
    return head;
}
int main(){
 struct node *head = malloc(sizeof(struct node));
 int choice=0,value;
 char c='y';
 do{
    printf("Enter your choice: \n1. Creation \n2. Insertion \n3. Deletion \n4. Traverse \n");
    scanf("%d",&choice);
    switch(choice){
        case 1 :
        head= createList(head);
        print(head);
        break;
        case 2: 
        printf("Enter data: \n");
        scanf("%d",&value);
        head = addAtEnd(head,value);
        print(head);
        break;
        case 3:
        head = delLast(head);
        print(head);
        break;
        case 4:
        print(head);
        break;
        default:
        printf("Enter valid input");


    }
    printf("Do you want to continue ? y==yes and n==no\n");
    scanf("%s",&c);
 }while(c=='y');
 return 0;
}