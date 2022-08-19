#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

//traverse of a linked list 

void traverse(struct node *ptr){
    while(ptr != NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
//deletion in the beginning 

void deleteFirst(struct node *ptr){
    struct node *temp=ptr;
    ptr=ptr->next;
    free(temp);
    traverse(ptr);
}

// delete inbetween

void deleteInbetween(struct node *ptr){
    struct node *temp= ptr;
    temp=temp->next;
    struct node *q = temp->next;
    temp->next= q->next;
    free(q);
    traverse(ptr);
}

//delete in the end

void deleteEnd(struct node *ptr){
   struct node *p= ptr;
   struct node *q= ptr->next;
   while(q->next!=NULL){
       p=p->next;
       q=q->next;

   }
   p->next = NULL;
   free(q);
   traverse(ptr);

}
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

   printf("Where do you want to delete the element?\n1.Beginning\n2.Inbetween\n3.End\n");
    scanf("%d",&choice);

    if(choice==1){
        deleteFirst(first);
    }
    else if (choice==2){
        deleteInbetween(first);
    }
    else if(choice==3){
        deleteEnd(first);
    }
    else
    printf("Wrong input");


    return 0;


}