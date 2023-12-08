#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next,*prev;
}*front,*rear;
void dpush()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter data:");
	scanf("%d",&temp->data);
	temp->next=front;
	temp->prev=NULL;
	front=temp;
}
void dpop()
{
	int x;
	struct node *temp,*nd;
	if(front==NULL)
	{
		printf("\nList Empty!!");
		return;
	}
	x=front->data;
	nd=front;
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		front=front->next;
		front->prev=NULL;
		free(nd);
		printf("\n%d is the deleted item.",x);
		return;
	}
}
void dinject()
{
	int x;
	struct node *temp;
	printf("\nEnter data:");
	scanf("%d",&x);
	temp->data=x;
	temp->next=NULL;
	if(front==NULL)
	{
		temp->prev=NULL;
		front=rear=temp;
		return;
	}
	else
	{
		temp->prev=rear;
		rear->next=temp;
		rear=temp;
	}
	return;
}
void deject()
{
	int x;
	struct node *temp,*n;
	if(front==NULL)
	{
		printf("\nList Empty!!");return;
	}
	x=front->data;
	n=front;
	if(front==rear)
	{
		front=rear=NULL;
	}
	else
	{
		n=rear;
		rear->prev->next=NULL;
		rear=rear->prev;
		free(n);
	}
}
void display()
{
	struct node *temp;
	temp=front;
	if(front==NULL)
	{
		printf("\nList empty..");return;
	}
	else
	{
		while(temp->next!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
		printf("%d\n",temp->data);
	}
}
int main()
{
	int ch;
		while(1)
		{
			printf("\n\t1.Push\n\t2.Pop\n\t3.Inject\n\t4.Deject\n\t5.Display\n\t6.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:dpush();break;
				case 2:dpop();break;
				case 3:dinject();break;
				case 4:deject();break;
				case 5:display();break;
				case 6:exit(1);break;
				default: printf("Invalid choice..");
			}
		}
		getch();
}
