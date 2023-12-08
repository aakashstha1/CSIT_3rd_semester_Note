#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 4
void push(struct stack *);
void pop(struct stack *);
void display(struct stack *);
struct stack
{
	int item[max];
	int tos;
};
int main()
{
	struct stack s;
	int ch;
	s.tos=-1;
	while(1)
	{	
		printf("\n\n\t----Menu----\n\t");
		printf("\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit");
		printf("\n\n\tEnter the choice(1-4):");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push(&s);break;
			case 2:pop(&s);break;
			case 3:display(&s);break;
			case 4:exit (1);
			default:printf("\n\tInvalid choice!! Try again (1-4)!!\n");
		}
	}
}
void push(struct stack *ps)
{
	int x;
	if(ps->tos==max-1)
	{
		printf("Stack is Full. :(");return;
	}
	printf("\n\tEnter the data:");
	scanf("%d",&x);
	ps->tos++;
	ps->item[ps->tos]=x;
}
void pop(struct stack *ptr)
{
	if(ptr->tos==-1)
	{
		printf("Stack is Empty. :(");return;
	}
	int temp;
	temp=ptr->item[ptr->tos];
	ptr->tos--;
	printf("\n\tPopped item = %d",temp);
}
void display(struct stack *p)
{
	int i;
	for(i=0;i<=p->tos;i++)
	{
		printf("\t%d",p->item[i]);
	}
}
