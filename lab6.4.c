#include <stdio.h>
#define MAX 50
 
void insert();
void delete();
void display();
int queue_array[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    char c='y';

   do
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            printf("Before insertion:\n ");
            display();
            insert();
            printf("After Insertion : \n");
            
            display();
            break;
            case 2:
            printf("Before Deletion : \n");
            display();   
            delete();
            printf("After Deletion: \n");
            display();
            break;
            default:
            printf("Wrong choice \n");
        }
        printf("Do you want to continue ?? yes==y and no==n\n");
        scanf("%s",&c);
    } while(c=='y');
        return 0;
}
void insert()
{
    int add_item;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        front = 0;
        printf("Inset the element in queue :\n ");
        scanf("%d", &add_item);
        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}
 
void delete()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
}
 
void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}