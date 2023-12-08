//write in c program to implement stack and its operation(push pop display)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 10
struct stack
{
	int item[size];
	int tos;
}s;
int push()
{
	int x;
	if(s.tos==size-1)
	{
		printf("stack full");
		return 0;
	}
	printf("enter a element");
	scanf("%d",&x);
	s.tos++;
	s.item[s.tos]=x;
}
int pop()
{
	int x;
	if(s.tos==-1)
	{
		printf("stack empty");
		return 0;
	}
	printf("deleted element %d\n",s.item[s.tos--]);	
}
int main()
{	
		int i;
		s.tos=-1;
		while(1)
		{
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. display\n");
		printf("4. exit\n");
		printf("choose the number\n");
		scanf("%d",&i);
		switch(i)
		{
			case 1:push();continue;
			case 2:pop();continue;
			case 3:for(i=0;i<=s.tos;i++)
					{
						printf("%d",s.item[i]);
					}
			case 4:exit(0);
			default:
				printf("invalid");
		}
	}
	getch();
		
}

