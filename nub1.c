#include <stdio.h>
#include <stdlib.h>

struct node
{
        int data;
        struct node *link;
};

void insert_end(struct node *head)
{
        int data;
        printf("enter data to be inserted in the new node:\n");
        scanf("%d", &data);
        struct node *ptr, *temp;
        ptr = head;
        temp = malloc(sizeof(struct node));
        temp->link = NULL;
        temp->data = data;
        while (ptr->link != NULL)
        {
                ptr = ptr->link;
        }
        ptr->link = temp;
}

void print_data(struct node *head)
{
        int i = 0;
        struct node *ptr = head;
        while (ptr != NULL)
        {
                printf("NODE %d:%d\n", i + 1, ptr->data);
                ptr = ptr->link;
                i++;
        }
}
void bubbleSort(struct node *head)
{
        int flag;
        struct node *ptr1;
        struct node *ptr2 = NULL;

        if (head == NULL)
                return;

        do
        {
                flag = 0;
                ptr1 = head;

                while (ptr1->link != ptr2)
                {
                        if (ptr1->data > ptr1->link->data)
                        {
                                swap(ptr1, ptr1->link);
                                flag = 1;
                        }
                        ptr1 = ptr1->link;
                }
                ptr2 = ptr1;
        } while (flag);
}

void swap(struct node *a, struct node *b)
{
        int temp = a->data;
        a->data = b->data;
        b->data = temp;
}

int main()
{
        struct node *head = malloc(sizeof(struct node));
        int data;
        printf("enter data:\n");
        scanf("%d", &data);
        head->data = data;
        head->link = NULL;

        struct node *current = malloc(sizeof(struct node));
        printf("enter data:\n");
        scanf("%d", &data);
        current->data = data;
        current->link = NULL;
        head->link = current;

        print_data(head);
        insert_end(head);
        print_data(head);
        // bubbleSort(head);
        // print_data(head);

        return 0;
}