//WAP to insert at beginning and insert at last,delete at beginning and delete at last and display the stack using linked list
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
void insrtn()
{
	int x,position;
	struct node *temp,*left,*right;
	right=root;
	int counter=1;
	printf("\nEnter a position:");
	scanf("%d",&position);
	if(position==1)
	{
		insrtfirst();
	}
	else
	{
		while(counter!=position)
		{
			counter++;
			left=right;
			right=right->next;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data:");
		scanf("%d",&x);
		temp->data=x;
		temp->next=right;
		left->next=temp;
		return;
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
void del()
{
	struct node *temp;
	if(root==NULL)
	{
		printf("List Empty.");return;
	}
	else
	{
		temp=root;
		root=root->next;
		free(temp);
	}
}
void delany()
{
	int position;
	struct node *left,*right,*temp;
	printf("\nEnter position:");
	scanf("%d",&position);
	right=root;
	if(position==1)
	{
		del();
	}
	int i=1;
	while(i!=position)
	{
		i++;
		left=right;
		right=right->next;
	}
	if(right->next==NULL)
	{
		left->next=NULL;
		free(right);
	}
	else
	{
		temp=right->next;
		left->next=temp;
		free(right);
	}
	return;
}
void dellast()
{
	struct node *temp;
	if(root==NULL)
	{
		printf("List empty");
		return;
	}
	else
	{
		if(root->next==NULL)
		{
			temp=root;
			root=NULL;
			free(temp);
			return;
		}
		else
		{
			temp=root;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
		}
	}
	
}
int main()
{
		int ch;
		while(1)
		{
			printf("\n\t1.Insert at First\n\t2.Insert at any position\n\t3.Insert at last\n\t4.Display\n\t5.Delete\n\t6.Delete at any position\n\t7.Delete at last\n\t8.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:insrtfirst();break;
				case 2:insrtn();break;
				case 3:insrtlast();break;
				case 4:display();break;
				case 5:del();break;
				case 6:delany();break;
				case 7:dellast();break;
				case 8:exit(1);break;
				default: printf("invalid choice..");
			}
		}
		getch();
}
