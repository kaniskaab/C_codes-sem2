#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *left,*right;
};
struct node * insert(struct node *root,int data){
    struct node *temp=root;
    struct node * new = malloc(sizeof(struct node));
    new->data=data;
    new->left=new->right=NULL;
    if(root==NULL){
        return new;
    }
    while(temp->right!=NULL){
        temp=temp->right;
    }
    temp->right=new;
    new->left=temp;
    new->right=NULL;
    return root;
}
int main(){
    struct node *head=NULL;
    head=insert(head,1);
    head=insert(head,2);
    head=insert(head,3);
    head=insert(head,4);
    head=insert(head,5);
    head=insert(head,6);
    while(head!=NULL){
        printf("%d",head->data);
        head=head->right;
    }
    return 0;
}