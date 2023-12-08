#include<stdio.h>
#include<conio.h>
#include<alloc.h>
void main()
{
	int i,j,p,q,r,s,*m1, *m2, *a;
	clrscr();
	printf("Enter the order of matrix A:");
	printf("\n");
	printf("m=");
	scanf("%d", &p);
	printf("n=");
	scanf("%d", &q);
	printf("\nEnter the order of matrix B:");
	printf("\n");
	printf("m=");
	scanf("%d", &r);
	printf("n=");
	scanf("%d", &s);
	if(q==r)
	{
		m1=(int*)calloc(p*q, sizeof(int));
		m2=(int*)calloc(r*s, sizeof(int));
		a=(int*)calloc(p*s, sizeof(int));
		printf("\nEnter the elements of matrix A: \n");
		for(i=0;i<p;i++)
		{
		for(j=0;j<q;j++)
		{
		scanf("%d",(m1+i*q+j));
		}
		}
		printf("\nEnter the elements of matrix B: \n");
		for(i=0;i<r;i++)
		{
		for(j=0;j<s;j++)
		{
		scanf("%d",(m2+i*r+j));
		}
	}

	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			*(a+i*q+j)=*(m1+i*q+j)+(*(m2+i*r+j));
		}
	}
	printf("\nSum of the Matrices A and B: \n");
	for(i=0;i<p;i++)
	{
		printf("\n");
		for(j=0;j<q;j++)
		{
			printf("%d\t",*(a+i*q+j));
		}
	}
	}
	getch();
}