#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int traverse(struct node *ptr){
    int count=0;
    while(ptr->next!=NULL){
        ptr=ptr->next;
        count++;
    }
    return count+1;
}
void middle(struct node *ptr,int index){
    struct node *p= ptr;
    for(int i=1;i<index;i++){
        p=p->next;
    }
    printf("%d",p->data);

}

int main(){
    int size,index=0;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    struct node *six;

    first= (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    six = (struct node *)malloc(sizeof(struct node));

    first->data=1;
    first->next= second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=4;
    fourth->next=fifth;

    fifth->data=5;
    fifth->next=six;

    six->data=6;
    six->next=NULL;

    size = traverse(first);

    if(size%2!=0){
     index= size/2;
     index+=1;
    }
    if(size%2==0){
        index=(size/2)+1;
    }
    middle(first,index);


    return 0;
}   