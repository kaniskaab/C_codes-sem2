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
//insert in the beginning 

void insertFirst(struct node *new){
    int a;
    struct node *real;
    real = (struct node*)malloc(sizeof(struct node));

    printf("enter number to insert in the beginning\n");
    scanf("%d",&a);
    real->data= a;
    real->next=new;
    traverse(real);
}

// insert inbetween

void insertInbetween(struct node *new1){
    int a;
    struct node *inbetween;
    inbetween = (struct node *)malloc(sizeof(struct node));
    struct node *new2;
    new2 = (struct node *)malloc(sizeof(struct node));


    printf("Enter number that you want to insert inbetween\n");
    scanf("%d",&a);
    new2= new1->next;
    inbetween->data=a;
    inbetween->next=new2->next;
    new2->next=inbetween;
    traverse(new1);
}

//insert in the end

void insertEnd(struct node *new3){
    int a;
    struct node *end;
    end = (struct node*)malloc(sizeof(struct node));
    struct node *p= new3;
    while( p->next!=NULL){
        p=p->next;
    }
    printf("Enter number that you want to insert in the end\n");
    scanf("%d",&a);
    
    end->data=a;
    p->next=end;
    end->next= NULL;
    traverse(new3);

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

   printf("Where do you want to insert the element?\n1.Beginning\n2.Inbetween\n3.End\n");
    scanf("%d",&choice);

    if(choice==1){
        insertFirst(first);
    }
    else if (choice==2){
        insertInbetween(first);
    }
    else if(choice==3){
        insertEnd(first);
    }
    else
    printf("Wrong input");


    return 0;


}