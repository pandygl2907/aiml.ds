#include<stdio.h>

int stack[100],choice,n,top,x,i;
void push()
{
    if(top>=n-1)
    {
        printf("Stack Overflow... \n");
    }
    else
    {
        printf("\nEnter a value to be pushed : ");
        scanf("%d", &x);
        top++;
        stack[top]=x;
    }
}

void pop()
{
    if(top<=-1)
    {
        printf("Stack Underflow... \n");
    }
    else
    {
        printf("\nPopped elements is : %d", stack[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("\nStack elements are : ");
        for(i=top; i>=0; i--)
        {
            printf("%d ",stack[i]);
        }
    }
    else
    {
        printf("Stack is empty... \n");
    }   
}

int main()
{
    top = -1;
    int choice=0;
    printf("\nEnter the size of STACK : ");
    scanf("%d", &n);
    while(choice!=4)
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nEnter the Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                break;
            }
            default:
            {
                printf ("\nInvalid Choice... \n");
            }                
        }
    };
    return 0; 
}
