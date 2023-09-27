#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push()
{
    int n;
    printf("\nEnter the value : ");
    scanf("%d",&n);
    struct node *p = malloc (sizeof(struct node));
    p->data = n;
    p->next = top;
    top = p;
}

void pop()
{
    struct node *t;
    if(top == NULL)
    {
        printf("Stack Underflow...\n");
    }
    else
    {
        t = top;
        printf("\nPopped Element : %d", top->data);
        top = top->next;
        free(t);
    }
}

void display()
{
    struct node *t;
    if(top == NULL)
    {
	    printf("Stack is Empty...\n");
    }
    else
    {
        printf("\nStack Elements : ");
	    for(t=top; t!=NULL; t=t->next)
	    {
	        printf("%d ", t->data);
	    }
    }
}

int main()
{
    int ch=0;
    while(ch!=4)
    {
        printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
        printf("\nEnter your choice : ");
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
    	    case 4:
    	        break;
    	    default:
    	        printf("\nInvalid choice...\n");
    	        break;
        }
    }
    return 0;
}
