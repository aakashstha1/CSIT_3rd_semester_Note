//Selection Sort
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a[100];
	int size,i,n,si=0,sj=0,min=0,temp;
	printf(".......Selection Sort......");
	printf("\n Enter the size of array:");
	scanf("%d",&size);
	printf("\n Enter elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&n);
		a[i]=n;
	}
	for(si=0;si<size-1;si++)
	{
		min=si;
		for(sj=si+1;sj<size;sj++)
		{
			if(a[sj]<a[min])
			{
				if(a[sj]<a[min])
				min=sj;
			}
		}
		temp=a[min];
		a[min]=a[si];
		a[si]=temp;
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
