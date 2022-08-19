#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int queue_arr[MAX];
int front=-1;
int rear=-1;
void display();
void insert(int item);
int del();
int peek();
int isFull();
int isEmpty();
void insert(int item){
    if(isFull()){
        printf("Overflown \n");
        return ;
    }
    if(front ==-1)
    front =0;
    if(rear==MAX-1)
    rear=0;
    else
    rear=rear+1;
    queue_arr[rear]=item;

}
int del(){
    int item;
    if(isEmpty()){
        printf("Queue underflown \n");
        exit(1);
    }
    item=queue_arr[front];
    if(front==rear){
    front=-1;
    rear=-1;
    }
    else if(front == MAX-1){
        front ==0;
    }
    else 
    front++;
    return item;

}
int isEmpty(){
    if (front==-1)
    return 1;
    else
    return 0;
}
int isFull(){
    if((front==0 && rear==MAX-1)||(front=rear+1)){ 
        return 1;
        }
   
    else {
        return 0;
        }
    
}
void display(){
    int i;
    if(isEmpty()){
        printf("Queue is empty \n");
        return ;
    }
    printf("Queue elements: \n");
    i=front;
    if(front<=rear){
        while(i<=rear){
            printf("%d",queue_arr[i+1]);
        }
    }
    else 
    {
        while(i<=MAX-1){
        printf("%d\t",queue_arr[i++]);}
        i=0;
        while(i<=rear){
        printf("%d\t",queue_arr[i++]);}
    }
}
int main(){
    insert(23);
    // insert(89);
    // insert(43);
    // insert(12);
    display();
    return 0;
}