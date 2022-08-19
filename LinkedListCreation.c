#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main()
{
    int choice;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));


    first->data = 5;
    first->next = second;

    second->data = 8;
    second->next = third;

    third->data = 10;
    third->next = fourth;

    fourth->data= 18;
    fourth->next = NULL;

    return 0;

}