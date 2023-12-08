#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
}*tos;
void insrt()
{
	int x;
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&x);
	temp->data=x;
	if(tos==NULL)
	{
		temp->next=NULL;
		tos=temp;
	}
	else
	{
		temp->next=tos;
		tos=temp;
	}
}
void del()
{
	struct node *temp;
	if(tos==NULL)
	{
		printf("List Empty.");return;
	}
	else
	{
		temp=tos;
		tos=tos->next;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	temp=tos;
	if(tos==NULL)
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
			printf("\n\t1.Insert at First\n\t2.Delete\n\t3.Display\n\t4.Exit\n");
			printf("Enter the choice:");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:insrt();break;
				case 2:del();break;
				case 3:display();break;
				case 4:exit(1);break;
				default: printf("invalid choice..");
			}
		}
		getch();
}
