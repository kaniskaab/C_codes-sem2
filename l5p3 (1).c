#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
        int StudentID;
        int marks;
        char name[20];
        struct node *next;
};

struct node *head = NULL;

void insert(int id, int marks, char name[20])
{

        if (head == NULL)
        {
                head->StudentID = id;
                head->marks = marks;
                strcpy(head->name, name);
                head->next = NULL;
        }
        else
        {
                struct node *temp = malloc(sizeof(struct node));
                struct node *ptr = head;
                temp->StudentID = id;
                temp->marks = marks;
                strcpy(temp->name, name);
                while (ptr->next != head)
                        ptr = ptr->next;
                ptr->next = temp;
                temp->next = head;
        }
}
void show_minimum(int min)
{
        printf("Minimum marks is scored by:\n");
        struct node *ptr = head;
        while (ptr->next != head)
        {
                if (ptr->marks == min)
                {
                        printf("StudentID\tMarks\tName\n");
                        printf("%d\t%d\t%s\n", ptr->StudentID, ptr->marks, ptr->name);
                        ptr = ptr->next;
                }
        }
}

void minimum()
{
        struct node *ptr = head;
        int min = ptr->marks;
        while (ptr->next != head)
        {
                if (ptr->marks < min)
                        min = ptr->marks;
                ptr = ptr->next;
        }
        show_minimum(min);
}

int main()
{
        insert(101, 88, "Raj");
        insert(101, 23, "Kabir");
        insert(109, 47, "Babar");

        void minimum();
        return 0;
}