#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int arr[5];
int front = -1;
int back = -1;
int isEmpty()
{
    if (front == -1)
        return 1;
    else
        return 0;
}
int isFull()
{
    if ((front == 0 && back == MAX - 1) || front == back + 1)
    {
        return 1;
    }
    else
        return 0;
}
void insert(int value)
{
    if (isFull())
        printf("stack full \n");
    else
    {
        if (front == -1)
            front = 0;
        if (back == MAX - 1)
            back = 0;
        back++;
        arr[back] = value;
    }
}
int del()
{
    int item;
    if (isEmpty())
    {
        printf("Stack underflown\n");
        exit(1);
    }
    else
    {
        item = arr[front];
        if (front == back)
        {
            front = -1;
            back = -1;
        }
        if (front == (MAX - 1))
        {
            front = 0;
        }
        else
            front++;
    }
    return item;
}
void display(){
    int i=0;
    if(isEmpty()){
        printf("Queue is empty: \n");
    }
    printf("Queue elements :\n");
    i=front;
   if(front<=back){
    while(i<=back){
        printf("%d\t",arr[i++]);
    }
   }
   else{
    while(i<=MAX-1){
        printf("%d\t",arr[i++]);
    }
    i=0;
    while(i<=back){
        printf("%d\t",arr[i++]);
    }

   }
}
int main(){
    insert(13);
    insert(3);
    insert(89);
    insert(12);
    insert(7);
    del();
    del();
    del();
    del();

    display();
    return 0;
}
