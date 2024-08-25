#include <stdio.h>
#include <stdlib.h>
int arr[100];
int r = -1, f = -1;
void enqueue()
{
    int x;
    if (r == 100)
    {
        printf("is full");
    }
    else
    {
        printf("enter the element\n");
        scanf("%d", &x);
        r++;
        arr[r] = x;
    }
}
void dequeue()
{
    if (f == -1 || f == r)
    {
        printf("it is empty\n");
    }
    else
    {
        printf("the poped out element is \n%d\n", arr[f]);
        f++;
    }
}
void display()
{
    for (int i = f; i <= r; i++)
    {
        printf("the elements are \n%d\n", arr[i]);
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