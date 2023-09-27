#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head = NULL;
struct node *tail = NULL;
struct node *temp;
int count=0, n, i, pos;

void createnode()
{
  if(head==NULL)
  {
    head = malloc(sizeof(struct node));
    scanf("%d", &head->data);
    head->next = NULL;
    tail = head;
    count++;
  }
  else
  {
    temp = malloc(sizeof(struct node));
    scanf("%d", &temp->data);
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
    count++;
  }
}

void insertnode()
{
  printf("\nEnter the position to insert the element : ");
  scanf("%d", &pos);
  if(pos == 1)
  {
    temp = malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d", &temp->data);
    temp->next = head;
    head = temp;
    count++;
  }
  else if(pos>count)
  {
    temp = malloc(sizeof(struct node));
    printf("Enter the element : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    tail->next = temp;
    tail = temp;
    count++;
  }
  else
  {
   struct node *q = head;
   for(i=2; i<pos; i++)
   {
     q = q->next;
   }
   temp = malloc(sizeof(struct node));
   printf("Enter the element : ");
   scanf("%d", &temp->data);
   temp->next = q->next;
   q->next = temp;
  }
  printf("\nElement inserted in the specified position\n");
}

void deletenode()
{
  int x=0;
  struct node *z = NULL;
  printf("\nEnter the position to delete : ");
  scanf("%d", &pos);
  temp = malloc(sizeof(struct node));
  temp = head;
  if(pos == 1)
  {
    head = head->next;
    x = temp->data;
    free(temp);
    printf("\nElement %d deleted...", x);
  }
  else if(pos>1 && pos<=count)
  {
    for(i=1; i<pos; i++)
    {
      z = temp;
      temp = temp->next;
    }
    z->next = temp->next;
    x = temp->data;
    free(temp);
    printf("\nElement %d deleted...", x);
  }
  else
  {
    printf("\nInvalid position...\n");
  }
}

void display()
{
  struct node *temp = head;
  while(temp!=NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
}

int main()
{
  int n,op,a[10],i;
  clrscr();
  printf("\nEnter the total no. of nodes : ");
  scanf("%d", &n);
  for(i=1; i<=n; i++)
  {
    printf("Enter the element : ");
    createnode();
  }
  printf("\nSingly Linked List....\n");
  while(op!=5)
  {
    printf("\n1.Create\n2.Insert\n3.Delete\n4.Display\n5.Exit\n");
    printf("\nEnter the option : ");
    scanf("%d", &op);
    switch(op)
    {
      case 1:
	createnode();
	break;
      case 2:
	insertnode();
	break;
      case 3:
	deletenode();
	break;
      case 4:
	display();
	break;
      case 5:
	break;
      default:
	printf("\nInvalid Option....\n");
	break;
    }
  };
  getch();
  return 0;
}
