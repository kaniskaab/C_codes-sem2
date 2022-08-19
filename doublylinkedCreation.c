#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *prev;
    int data;
    struct node *next;
};
void print(struct node *head){
    while(head!=NULL){
        printf("%d\n",head->data);
        head=head->next;
    }
 }
struct node *create (struct node *head, int n){
    int value;
    struct node *temp;
    struct node *newNode = malloc(sizeof(struct node*));
    temp=head;
    for(int i=0;i<n;i++){
    printf("Enter value :: ");
    scanf("%d",&value);
    newNode->data=value;
    newNode->next=NULL;
    newNode->prev=NULL;
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    }

    return head;
}
int main(){
    int num,n;
    struct node *head= malloc(sizeof(struct node*));
    struct node *new= malloc(sizeof(struct node*));
    printf("How many elements do you want?\n");
    scanf("%d",&n);
    new = create(head,n);
    while(new!=NULL){
        printf("%d",new->data);
    }
    return 0;

}