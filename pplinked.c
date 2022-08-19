#include <stdio.h>
#include <stdlib.h>
struct node{
  int info;
  struct node* link;
};

int main(){
  struct node* add= malloc(sizeof(struct node));
  struct node* head= malloc(sizeof(struct node));
  struct node* new= malloc(sizeof(struct node));
  head->info=1;
  head->link=NULL;

  struct node* first= malloc(sizeof(struct node));
  first->info=2;
  first->link=NULL;
  head->link=first;


  struct node* second= malloc(sizeof(struct node));
  second->info=3;
  second->link=NULL;
  first->link=second;
  
  struct node *temp=head;

  //deletion of 1st
  // head=head->link;
  // free(temp);


  // while(temp->link->link!=NULL){
  //   temp = temp->link;
  // }
  // temp->link = NULL; deletion from end

  
//   int pos;
//   printf("pos");
//   scanf("%d",pos);

//  for(int i=2;i<pos;i++){
//   if(head->link!=NULL){
//     head=head->link;
//   }
//  }
//  head->link = head->link->link;
  while(head!=NULL){
    printf("%d\n",head->info);
    head=head->link;
    }




  
  return 0;
}