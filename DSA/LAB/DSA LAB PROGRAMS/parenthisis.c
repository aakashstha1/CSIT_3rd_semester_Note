/*wap to check whether the equation is in balance or not*/
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define max 100
int l;
struct stack
{	
	char item[max];
	int tos;
}s;

void push(char br)
{
	s.item[++s.tos]=br;	
}

int pop(char br)
{
	if(br==s.item[s.tos--])
	{
		return s.tos;	
	}
	else
	printf("the equation in not in balance");exit(0);
}
int main() 
{
	char eq[100];
	int i;
	s.tos=-1;
	printf("enter the equation\n");
	scanf("%s",eq);
	l=strlen(eq);
	for(i=0;i<l;i++)
	{
		if(eq[i]=='{' || eq[i]=='[' || eq[i]=='(')
		{
			push(eq[i]);continue;
		}
		if(eq[i]=='}') 
		{
			pop('{');continue;
		}
		if(eq[i]==']') 
		{
			pop('[');continue;
		}
		if(eq[i]==')') 
		{
			pop('(');continue;
		}
	}
	if(s.tos==-1)
	{
		printf("\n the equation is in balance");
	}
	else
	{
		printf("\n the equation is not in balance");
	}
	getch();
}
