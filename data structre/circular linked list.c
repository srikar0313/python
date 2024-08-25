// circular linked lsit
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void Traversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("element: %d\n", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *Insertion(struct Node *head, struct Node *prev, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prev->next;
    prev->next = ptr;

    return head;
}
struct Node *Deletion(struct Node *head, int index)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
void main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = head;

    printf("linkedlist is\n");
    Traversal(head);

    printf("linked after insertion is \n");
    head = Insertion(head, second, 0);
    Traversal(head);

    printf("linked after deletion is\n");
    head = Deletion(head, 0);
    Traversal(head);
}