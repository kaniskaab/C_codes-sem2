#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node* next;
};
void checkforloop(struct node* head){
    struct node*ptr1,*ptr2;
    ptr1=ptr2=head;
    while(ptr1 && ptr2 && ptr2->next){
        ptr1=ptr1->next; ptr2=ptr2->next->next;
        if(ptr1==ptr2){
            printf("\nThere is a loop in the linked list");
            return;}}
    printf("No loop found");
}
int main(){
struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    head->data = 80;
    head->next = second;
    second->data = 17;
    second->next = third;
    third->data = 62;
    third->next = fourth;
    fourth->data = 43;
    fourth->next = second;
    checkforloop(head);
    return 0;
}
