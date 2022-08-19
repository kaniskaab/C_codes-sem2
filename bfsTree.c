#include <stdio.h>
#include <stdlib.h>
struct bttree
{
    int data;
    struct bttree *left, *right;
};
typedef struct bttree node;
int queue[20];
node *root = NULL;
void print(node *root){
    printf("%d",root->data);
}
int rear = -1, front = 0, val;
void insert(node *, node *);
void bfs(node *root);
void post(node *root);
void pre(node *root);
void in(node *root);
int main()
{
    node *new = NULL;
    int data = 1;
    printf("Enter values to insert((press 0 twice to stop))");
    while (1)
    {

        scanf("%d\n", &data);
        if (data == 0)
        {
            break;
        }
        new = malloc(sizeof(node));
        new->left = new->right = NULL;
        new->data = data;
        if (root == NULL)
        {
            root = new;
        }
        else
            insert(new, root);
    }
    // queue[++rear] = root->data;
    // bfs(root);
    // printf("values are : \n");
    // for (int i = 0; i <= rear; i++)
    // {
    //     printf("%d\n", queue[i]);
    // }
    // printf("hello");
  pre(root);
    return 0;
}
void insert(node *new, node *root)
{
    if (new->data > root->data)
    {
        if (root->right == NULL)
            root->right = new;
        else
            insert(new, root->right);
    }
    if (new->data < root->data)
    {
        if (root->left == NULL)
            root->left = new;
        else
            insert(new, root->left);
    }
}
void bfs(node *root)
{
    val = root->data;
    if ((front <= rear) && (root->data == queue[front]))
    {
        if (root->left != NULL)
            queue[++rear] = root->left->data;
        if (root->right != NULL || root->right != NULL)
            queue[++rear] = root->right->data;
        front++;
    }
    if (root->left != NULL)
    {
        bfs(root->left);
    }
    if (root->right != NULL)
    {
        bfs(root->right);
    }
}
void pre(node *root)
{
    if (root == NULL)
        return;
    printf("%d\n", root->data);
    pre(root->left);
    pre(root->right);
}
void in(node *root)
{
    if (root == NULL)
        return;
    in(root->left);
    printf("%d\n", root->data);
    in(root->right);
}
void post(node *root)
{
    if (root == NULL)
        return;
    post(root->left);
    post(root->right);
    printf("%d\n", root->data);
}
