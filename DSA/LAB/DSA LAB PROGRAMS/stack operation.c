#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5


 struct stack
 {
 	int item[size];
 	int tos;
 }s;

 
int push()
{
	int x;
	if (s.tos>=size-1)
	printf("stack overflow");
	else 
	return 0;
	 
	printf("Enter data;");
	scanf("%d",&x);
	s.tos++;
	s.item[s.tos]=x;
	
}

int pop()
{
	int x;
	if (s.tos==-1)
	printf("stack is underflow");
	else
	return 0;
	
	x=s.item[s.tos];
	s.tos--;
	printf("popped item=%d",x);
	
}

int display()
{
	int i;
	for(i=0;i<=s.tos;i++)
	{
		printf("%d",s.item[s.tos]);
	}
}

int main()
{
	int choice;
	 s.tos=-1;
	printf("1.push\n2.pop\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:push(); break;
		case 2:pop();break;
		case 3:display();break;
		case 4:exit(1);
		default:printf("Invalid choice");
	
	}
	getch();
}
