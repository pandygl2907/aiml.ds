#include<stdio.h> 
#include<stdlib.h>
struct node
{
    int data;
    struct node * pre;
    struct node * next;
};

struct node *head = NULL;
struct node *tail = NULL;
struct node *m = NULL;

int count =0;

void create(int n,int a[])
{
    for(int i=0;i<n;i++)
    {
        if(head==NULL)
        {
            head = malloc(sizeof(struct node));
            head->data = a[i];
            head->next = NULL;
            head->pre = NULL;
            tail = head;
            count++;
        }
        else
        {
            m = malloc(sizeof(struct node));
            m->data=a[i];
            m->next=NULL;
            tail->next=m;
            m->pre=head;
            tail=m;
            count++;
        }
    }
}

void display() 
{ 
    struct node *p = head,*next,*pre; 
    printf("Nodes of doubly linked list: \n"); 
    while(p!= NULL)
    { 
        printf("%d ", p->data); 
        p = p->next; 
    } 
}

void insert(int value,int position)
{
    if (position==1)
    {
        struct node *p = malloc(sizeof(struct node));
        p->data=value;
        p->next=head;
        head=p;
        count++;
    }
    else if(position>count)
    {
        struct node * p=(struct node*)malloc(sizeof(struct node));
        p->data=value;
        p->next=NULL;
        tail->next=p;
        tail=p;
        count++;
    }
    else
    {
        struct node *q = head;
        for(int i=2;i<position;i++)
        {
            q=q->pre;
        }
        struct node *p = malloc(sizeof(struct node));
        p->data=value;
        p->next=q->next;
        q->next=p;
    }
}

int del(int position)
{
    struct node *p ;
    p=head;
    struct node *z=NULL;
    int x=0;
    if(position==1)
    {
        head=head->next;
        x = p->data;
        free(p);
    }
    else
    {
        for(int i=1;i<position;i++)
        {
            z=p;
            p=p->next;
        }
        z->next=p->next;
        x=p->data;
        free(p);
    }
    return x;
}

int main()
{
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the element : ");
        scanf("%d",&a[i]);
    }
    create(n,a);
    display();
    insert(66,6);
    printf("\n");
    display();
    int y=del(4);
    printf("\n");
    printf("Deleted element : %d\n",y);
    display();
    return 0;
}
