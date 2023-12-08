#include<stdio.h>
#include<conio.h>
void main()
{
	int *x,i;
	long int j=1;
	long int product(int *x);
	clrscr();
	printf("\n Enter 10 Numbers: \n");
	for(i=0;i<10;i++)
	scanf("%d",x+i);
	j=product(x);
	printf("\nThe product of given numbers is=%ld",j);
	getch();
}

long int product(int *x)
{
	int i;
	long int j=1;
	for(i=0;i<10;i++)
	{
		j=j* *(x+i);
	}
	return j;
}