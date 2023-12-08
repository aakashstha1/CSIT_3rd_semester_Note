#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5]={0,1,2,3,4};
	int b[5]={5,6,7,8,9};
	int c[10];
	int i,j=0;

	printf("\n Given list of array A is: ");
	for(i=0;i<5;i++)
	printf("\t %d",a[i]);

	printf("\nGiven list of array B is: ");
	for(i=0;i<5;i++)
	printf("\t %d",b[i]);

	for(i=0;i<5;i++)
	{
		c[j]=a[i];
		j++;
	}

	for(i=0;i<5;i++)
	{
		c[j]=b[i];
		j++;
	}

	printf("\n\n\n The new array is: \n");

	for(i=0;i<10;i++)
	{
		printf("%d \t",c[i]);
	}
	getch();
}