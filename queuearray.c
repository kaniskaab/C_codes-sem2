#include <stdio.h>
#include <stdlib.h>
int a[10];
int front=-1, rear=-1;
int isEmpty(){
    if(front==-1&&rear==-1)
    return 1;
    else
    return 0;
}
int isFull(){
    if(rear==9){
        return 1;
    }
    else
    return 0;

}
void enqueue(int value){
    if(isFull()){
        printf("Queue is full\n");
        return;
    }
    else if(isEmpty()){
        front=0;
        rear=0;
        a[rear]=value;

    }
    else 
    rear++;
    a[rear]=value;
}
void dequeue(){
    if(isEmpty()){
        printf("Queue is empty");
        return;
    }
    else if(front==rear){
        front=-1;
        rear=-1;
        return;
    }
    else
    front++;
    return;
}
void display(){
    for(int i=front;i<=rear;i++){
        printf("%d\t",a[i]);
    }
}
int main(){
    enqueue(90);
    enqueue(15);
    enqueue(20);
    dequeue();
    display();
    return 0;
}