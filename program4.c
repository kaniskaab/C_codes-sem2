#include <stdio.h>
#include <stdlib.h>
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
struct node *addAtBeg(struct node *head ,int data){
    struct node *temp= malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    temp->next = head;
    head->prev=temp;
    head=temp;
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

struct node *addAfterPos(struct node * head,int data,int position){
    struct node *newp= NULL;
    struct node *temp= head;
    struct node *temp2 = NULL;
    newp= addToEmpty(newp,data);
    while(position-1 !=1){
        temp=temp->next;
        position--;
    }
    if (temp->next==NULL){
        temp->next=newp;
        newp->prev=temp;
    }
    else{
        temp2=temp->next;
        temp->next=newp;
        temp2->prev=newp;
        newp->next=temp2;
        newp->prev=temp;
        return head;
    }
}
struct node *delFirst(struct node *head){
    struct node *temp=head;
    head=head->next;
    free(temp);
    temp=NULL;
    head->prev=NULL;
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
struct node *delInter(struct node *head ,int position){
    struct node *temp = head;
    struct node *temp2= NULL;
    if(position==1){
        head= delFirst(head);
        return head;
    }
    while(position>1){
        temp=temp->next;
        position--;
    }
    if(temp->next==NULL)
    head= delLast(head);

    else {
        temp2=temp->prev;
        temp2->next=temp->next;
        temp->next->prev=temp2;
        free(temp);
        temp=NULL;
    }
    return head;
}
struct node *rotation(struct node *head){
    struct node *temp1, *temp2;
    temp1=head;
    temp2=head;
    while(temp1->next!=NULL){
        temp1=temp1->next;
    }
    temp1->prev->next=NULL;
    temp1->prev=NULL;
    temp2->prev=temp1;
    temp1->next=temp2;
    head=temp1;
    return head;
}
struct node *reverse(struct node *head){
    struct node *ptr1=head;
    struct node *ptr2 = ptr1->next;
    ptr1->next = NULL;
    ptr1->prev=ptr2;
    while(ptr2!=NULL){
        ptr2->prev=ptr2->next;
        ptr2->next=ptr1;
        ptr1=ptr2;
        ptr2=ptr2->prev;
    }
    head=ptr1;
    return head;
}

int main(){
    struct node *head= NULL;
    int choice, value, position,size,mid;
    head = addToEmpty(head , 80);
    head = addAtEnd(head ,49);
    head = addAtEnd(head ,21);
    head = addAtEnd(head ,9);
    size = nodes(head);
   
    printf("List before any modification: \n");
    print(head);
    if (size%2==0){
        mid = (size/2)+1;
    }
    else
    {
        mid = (size+1)/2;
        mid++;
    }
    char c='y';


 do{  

    printf("Enter your choice : \n1. Add node at beginning\n2. Add node in the end\n3. Delete node in beginning\n4. Delete node in the end\n5. Insert at key position\n6. Delete at key position\n7. Insertion and deletion from the middle\n8. Reverse the list\n9. One circular rotation\n");
    
    scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
        printf("Enter data that you want to insert: \n");
        scanf("%d",&value);
        printf("After insertion : \n");
        head= addAtBeg(head,value);
        print(head);
        break;
        case 2:
        printf("Enter data that you want to insert: \n");
        scanf("%d",&value);
        printf("After insertion : \n");
        head= addAtEnd(head,value);
        print(head);
        break;
        case 3:
        printf("After deletion: \n");
        head = delFirst(head);
        print(head);
        break;
        case 4:
        printf("After deletion: \n");
        head = delLast(head);
        print(head);
        break;
        case 5:
        printf("Enter data that you want to insert: \n");
        scanf("%d",&value);
        printf("Enter position where you want to insert: \n");
        scanf("%d",&position);
        printf("After insertion : \n");
        head= addAfterPos(head, value,position);
        printf("After insertion : \n");
        print(head);
        break;
        case 6:
        printf("Enter position where you want to delete: \n");
        scanf("%d",&position);
        printf("After deletion : \n");
        head= delInter(head,position);
        print(head);
        break;
        case 7:
        printf("Enter data that you want to insert: ");
        scanf("%d",&value);
        head=addAfterPos(head,value,mid);
        printf("After addition in the middle: \n");
        print(head);
        head= delInter(head,mid);
        printf("After deletion from the middle: \n");
        print(head);
        break;

        case 8:
        printf("After reversing : \n");
        head= reverse(head);
        print(head);
        break;

        case 9:
        printf("After rotation: \n");
        head= rotation(head);
        print(head);
        break;

        default:
        printf("Enter valid input");
    }
    
    printf("Do you want to continue ? y== yes and n==no: \n");
    scanf("%s",&c);
    }while(c=='y');

    return 0;
}