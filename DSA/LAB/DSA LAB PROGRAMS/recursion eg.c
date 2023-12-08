// Write a C program to calculate factorial of given number using recursion...
#include<stdio.h>
#include<conio.h>
int factorial(int n);
int main()
{
	int n;
	printf("Enter a positive number:");
	scanf("%d",&n);
	printf("The factorial of %d is %d",n,factorial(n));
	return 0;
}
int factorial(int n)
{
	if(n!=1)
	{return n * factorial(n-1);
	}
}
