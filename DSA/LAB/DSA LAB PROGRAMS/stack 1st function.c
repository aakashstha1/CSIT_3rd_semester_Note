#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>
#define max 100
int push(struct stack *);
int pop(struct stack *);
int display( struct stack *);
int menu();
	
struct stack{
	int item[max];
	int tos;
};
struct stack s;




int main()
{
	s.tos=-1;
	menu();
	getch();	

	
}

int menu()
{	

	int num;
	while(1)
	{
	printf("\nMENU........\n  Program");
	printf("\nEnter... \n");
	printf("1> Push Function");
	printf("\n2> Pop Function");
	printf("\n3> Display Function");
	printf("\n \n");
	printf("Enter the number You wana choose \n");
	scanf("%d",&num);
	switch(num)
	{
		case 1: push(&s);break;
		case 2: pop( &s);break;
		case 3: display( &s);break;
		default: printf("Invalid choice");break;
		
	}
}
	getch();
}

int push(struct stack *ps)
{
	int x;
	printf("\n \n");
	if(ps->tos==max-1)
	{
		printf("\n stack full");
	}
	else
	{
	
	printf("enter the element for stack \n");
	scanf("%d",&x);
	ps->tos++;
	ps->item[ps->tos]=x;
	//printf("%d",ps->tos);
}
	printf("\n \n \n");
	
	system("cls");
	
	menu();
}


int pop( struct stack *ps)
{
	int x;
	printf("\n \n");
//	printf("%d",ps->tos);
	if(ps->tos==-1)
	{
		printf("\n stack empty!\n");
	}
	else
	{
	
	x=ps->item[ps->tos];
	ps->tos--;
	printf("\n popped item =%d ",x);
}
		printf("\n \n \n");
	
	
		menu();
			system("cls");
}

int display( struct stack *ps)
{
	int i;
	printf("\n \n");
	printf("the item of stack \n");
	for(i=0;i<=ps->tos;i++)
	if(ps->item[i]==0)
	{
		printf("\nstack empty");
	}
	else
	printf("\n%d ",ps->item[i]);
	
	printf("\n \n \n");
	
	
		menu();
	system("cls");
}

//praveendarklight@gmail.com
	



