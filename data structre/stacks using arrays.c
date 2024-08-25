#include <stdio.h>
#include <stdlib.h>
int arr[100];
int top = -1;
void push()
{
    int x;
    printf("enter the element\n");
    scanf("%d", &x);
    top++;
    arr[top] = x;
    printf("%d is pushed\n", x);
}
void pop()
{
    int y;
    y = arr[top];
    top--;
    printf("the popped elemnt is %d\n", y);
}
void display()
{
    for (int i = top; i <= 0; i--)
    {
        printf("elements are\n", arr[i]);
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
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("invalid choice");
        }
    }
}