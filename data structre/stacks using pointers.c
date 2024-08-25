#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*top=0;
void push(){
    int x;
    struct Node*newnode=(struct Node*)malloc(sizeof(struct Node));
    printf("enter elemnt to push\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void pop(){
    struct Node*temp=top;
    if (top==0)
    {
        printf("stack is empty");
    }
    else
    {
       printf("the poped element is \n%d\n",temp->data);
       top=top->next;
       free(temp);
    }    
}
void display(){
    struct Node*temp=top;
    while(temp!=0){
        printf("elements is \n%d\n",temp->data);
        temp=temp->next;
    }
}
void main(){
    int ch,choice=0;
     while (choice==0)
     {
        printf("to continue 0,1 to end\n");
        scanf("%d",&choice);
     
        printf("1.push,2.pop,3.display\n");
        scanf("%d",&ch);
     switch(ch)
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