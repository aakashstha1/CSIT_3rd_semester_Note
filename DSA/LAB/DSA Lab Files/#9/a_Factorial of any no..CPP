#include<stdio.h>
#include<conio.h>

long int fact(int n)
{
	if(n==0)
		return(1);
	else
		return(n*fact(n-1));
}

void main()
{
	clrscr();
	int n;
	long int f;
	printf("\n Input a number: ");
	scanf("%d",&n);
	f=fact(n);
	printf("\n The factorial of %d = %ld",n,f);
	getch();
}