#include <stdio.h>
#include <stdlib.h>
struct btnode
{
    int value;
    struct btnode *left, *right;
};
typedef struct btnode node;
node *root = NULL;
int rear = -1, front = 0, queue[20], i = 0, val;
void insert(node *new, node *root)
{
    if (new->value > root->value)
    {
        if (root->right == NULL)
        {
            root->right = new;
        }
        else
            insert(new, root->right);
    }
    if (new->value < root->value)
    {
        if (root->left == NULL)
        {
            root->left = new;
        }
        else
            insert(new, root->left);
    }
}
void bfs_search(node *root)
{
    val = root->value;
    if (front <= rear && root->value == queue[front])
    {
        if (root->left != NULL)
        {
            queue[++rear] = root->left->value;
        }
        if (root->right != NULL || root->right == NULL)
        {
            queue[++rear] = root->right->value;
        }
        front++;
    }
    if (root->left != NULL)
    {
        bfs_search(root->left);
    }
    if (root->right != NULL)
    {
        bfs_search(root->right);
    }
}
int main()
{
    node *new = NULL;
    int num = 1;
    printf("Enter eleemnts\n");
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
            break;
        new = malloc(sizeof(node));
        new->left = new->right = NULL;
        new->value = num;
        if (root == NULL)
        {
            root = new;
        }
        else
        {
            insert(new, root);
        }
    }
    printf("Elements\n");
    queue[++rear] = root->value;
    bfs_search(root);
    for (i = 0; i <= rear; i++)
    {
        printf("%d\n", queue[i]);
    }
    // while (root->right != NULL)
    // {
    //     root = root->right;
    // }
    // printf("%d\n", root->value);
    return 0;
}
