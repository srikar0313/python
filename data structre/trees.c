#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createnode(int data)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
}
void preorder(struct Node *root)
{
    if (root != NULL)
    {
        printf("%d", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d", root->data);
        inorder(root->right);
    }
}
void postorder(struct Node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d", root->data);
    }
}
void main()
{
    struct Node *n = createnode(4);
    struct Node *n2 = createnode(2);
    struct Node *n3 = createnode(1);
    struct Node *n4 = createnode(3);
    struct Node *n5 = createnode(5);

    n->left = n2;
    n->right = n5;
    n2->left = n3;
    n2->right = n4;

    printf("preorder\n");
    preorder(n);
    printf("\n");
    printf("inorder\n");
    inorder(n);
    printf("\n");
    printf("postorder\n");
    postorder(n);
    printf("\n");
}