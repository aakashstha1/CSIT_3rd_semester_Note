#include<stdio.h>
#include<conio.h>

long int sum(int n)
{
	if(n==1)
		return(1);
	else
		return(n+sum(n-1));
}

void main()
{
	clrscr();
	int n;
	long int s;
	printf("\n Input a number: ");
	scanf("%d",&n);
	s=sum(n);
	printf("\n The sum of %d = %ld",n,s);
	getch();
}