#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node *getNewNode(struct node *head,int data){
    struct node *new = malloc(sizeof(struct node));
    new->data=data;
    new->left=NULL;
    new->right=NULL;
    head=new;
    return head;
}
struct node *insert(struct node *root,int data){
    if(root==NULL){
        root = getNewNode(root,data);
    }
    else if(root->data<=data){
        root->right=(insert(root->right,data));
    }
    else if(root->data>=data){
        root->left=insert(root->left,data);
    }
    return root;
    
}
bool check(struct node *root,int data){
    if (root==NULL){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(root->data<data){
        return check(root->right,data);
    }
    else if(root->data>data){
        return check(root->left,data);
    }
}
void find(struct node *root,int data){
     if(check(root,data)){
        printf("found\n");
    }
    else
    printf("Not found \n");
}
void max(struct node *root){
    struct node *temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    printf("%d",temp->data);
}
void min(struct node *root){
    struct node *temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    printf("%d",temp->data);
}
int comp(int a , int b){
    if(a>b)
    return a;
    else 
    return b;
}
int findHeight(struct node *root){
    if(root==NULL){
        return -1;
    }
    
    return comp(findHeight(root->left),findHeight(root->right))+1;
}
int main(){
    struct node *root = NULL;
    root = insert(root,10);
    root = insert(root,12);
    root = insert(root,45);
    root = insert(root,32);
    root = insert(root,23);
    root = insert(root,11);
    root = insert(root,19);
    // find(root,45);
    // find(root,78);
    // find(root,12);
    printf("Height is :%d \n",findHeight(root));
    return 0;
}
