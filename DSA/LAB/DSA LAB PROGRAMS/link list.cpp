#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*root;
void insrtfirst()
{
	int x;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&x);
	temp->data=x;
	if(root==NULL)
	{
		temp->next=NULL;
		root=temp;
	}
	else
	{
		temp->next=root;
		root=temp;
	}
}
void insrtlast()
{
	struct node *temp1,*temp2;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter nodal value:");
	scanf("%d",&temp1->data);
	temp1->next=NULL;
	if(root==NULL)
	{
		root=temp1;
		return;
	}
	else
	{
		temp2=root;
		while(temp2->next!=NULL)
		{
			temp2=temp2->next;
		}
		temp1->next=NULL;
		temp2->next=temp1;
	}
	
}
void display()
{
	struct node *temp;
	temp=root;
	if(root==NULL)
	{
		printf("List empty :( ");return;
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
			printf("\n\t1.Insert at First\n\t2.Insert at last\n\t3.Display\n\t4.Display\n\t5.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:insrtfirst();break;
				case 2:insrtlast();break;
				case 3:display();break;
				case 4:exit(1);break;
				default: printf("invalid choice..");
			}
		}
		getch();
}
