#include <stdio.h>
#define N 5
int stack[N] = {1, 2, 3};
int top = 2;
void display();
void push()
{
    int data;
    printf("Enter number\n");
    scanf("%d", &data);
    if (top == -1)
    {
        printf("Overflow condition");
    }
    else
    {
        top++;
        stack[top] = data;
        display(top);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Underflow condition");
    }
    else
    {
        printf("Element popperd is : %d\n", stack[top]);
        top--;
        display(top);
    }
}
void peek()
{
    printf("Element : %d\n", stack[top]);
}
void display(int newTop)
{
    for (int i = 0; i <= newTop; i++)
    {
        printf("%d\t", stack[i]);
    }
}
int main()
{
    int ch;
        printf("Enter your choice\n1.Push\n2.Pop\n3.Peek\n4.Display\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display(top);
            break;
        default:
            printf("Invalid choice");
        }

    return 0;
}