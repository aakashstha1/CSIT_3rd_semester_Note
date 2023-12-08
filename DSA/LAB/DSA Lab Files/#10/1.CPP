#include<stdio.h>
#include<conio.h>
#include<process.h>
#define MAX 20

struct queue
{
	int item[MAX];
	int f;
	int r;
};
typedef struct queue qt;
void insert(qt*);
void delet(qt*);
void display(qt*);

void main()
{
	clrscr();
	int ch;
	qt *q;
	q->r=-1;
	q->f=0;
	printf("Menu for program:\n");
	printf("1. insert\n2. delete\n3. display\n4. exit\n");
	do
	{
	printf("Enter your choice: \n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insert(q);
			break;
		case 2:
			delete(q);
			break;
		case 3:
	display(q);
			break;
		case 4:
			exit(1);
			break;
		default:
			printf("Your choice is wrong\n");
		}
	}while(ch<5);
	getch();
}
/**********insert function*************/
void insert(qt *q)
{
	int d;
	printf("Enter data to be inserted\n");
	scanf("%d",&d);
	if(q->r==MAX-1)
	{
		printf("Queue is full\n");
	}
	else
	{
		q->r++;
		q->item[q->r]=d;
	}
}
/***********delete function*****************/
void delete(qt *q)
{
	int d;
	if(q->r<q->f)
	{
		printf("Queue is empty\n");
	}
	else
	{
		d=q->item[q->f];
		q->f++;
		printf("Deleted item is:");
		printf("%d\n",d);
}
}
/**************display function***********/
void display(qt *q)
{
	int i;
	if(q->r<q->f)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=q->f;i<=q->r;i++)
		{
			printf("%d\t",q->item[i]);
		}
	}
}