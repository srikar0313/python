#include <stdio.h>
#include <stdlib.h>
struct Node *r = NULL;
struct Node *f = NULL;
struct Node
{
    int data;
    struct Node *next;
};
void enqueue()
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    int x;
    printf("enter the value \n");
    scanf("%d", &x);
    if (temp == NULL)
    {
        printf("is full\n");
    }
    else
    {
        temp->data = x;
        temp->next = NULL;
        r = temp;
    }
}
void dequeue()
{
    struct Node *temp = f;
    if (r == NULL && f == NULL)
    {
        printf("is underflow");
    }
    else
    {
        printf("the poped element is \n%d\n", temp->data);
        f = f->next;
        free(temp);
    }
}
void display()
{
    struct Node *temp = f;
    for (int i = f; i <= r; i++)
    {
        printf("the elements are\n%d\n", temp->data);
        temp = temp->next;
    }
}
void main()
{
    int ch, choice = 0;
    while (choice == 0)
    {
        printf("to continue 0,1 to end\n");
        scanf("%d", &choice);

        printf("1.push,2.pop,3.display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            printf("invalid choice");
        }
    }
}