#include<stdio.h>
struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
void insertAtLast()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
	  start=temp;	
	}
	else
	{
		struct node *t;
		t=start;
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=temp;
	}
}

void traverse()
{
	struct node *temp;
	temp=start;
	while(temp->next!=NULL)
	{
        printf("  %d ",temp->data);
        temp=temp->next;
    }
     printf("  %d ",temp->data);
}

void main()
{
	insertAtLast();
	insertAtLast();
	insertAtLast();
	traverse();
}





