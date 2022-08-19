#include <stdio.h>
#include <stdlib.h>

#define size 5

struct queue
{
        int queue[size];
        int f,r;
};

typedef struct queue QUEUE;
QUEUE q;





void enqueue(int x)
{
        if (q.f == -1 && q.r == -1)
        {
                q.f =0;
                q.r=0;
                q.queue[0] = x;
        }

        else if (q.r==size-1)
                printf("Queue is full\n");

        else
        {
                q.r++;
                q.queue[q.r] = x;
        }
}

void dequeue()
{
        if (q.f == -1 && q.r == -1)
                printf("Empty queue\n");
        else if (q.f == q.r)
        {
                printf("Deleted element:%d\n", q.queue[q.f]);
                q.f = q.r = -1;
        }
        else
        {
                printf("Deleted element:%d\n", q.queue[q.f]);
                q.f++;
        }
}

void show()
{
        int i;
        if (q.f == -1 && q.r == -1)
                printf("Queue is empty\n");
        else
        {
                printf("Current status of the queue is:\n");
                for(i=q.f;i<=q.r;i++){
                        printf("%d\t",q.queue[i]);
                }
        }
}

int main()
{
        q.f = -1;
        q.r = -1;

        enqueue(1);
        enqueue(2);
        enqueue(3);
        enqueue(4);
        enqueue(1);
        enqueue(2);
        // printf("%d",q.f);
        // enqueue(4);
        show();
        dequeue();
        // printf("%d",q.queue[q.r]);

        // show();
        // enqueue(5);
        // show();
        // // dequeue();
        // show();
        // enqueue(6);
        // show();
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        dequeue();
        show();
        // enqueue(7);
        // show();

        return 0;
}
