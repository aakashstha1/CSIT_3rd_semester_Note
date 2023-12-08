#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,n,*ptr;
	int temp,sum=0;
	clrscr();
	printf("\nHow Many Nos.");
	scanf("%d",&n);
	printf("\nEnter %d numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
		sum=sum+ *(ptr+i);
	}
	for (i=0;i<n-1;i++)
	{
		for(j=1;j<n;j++)
		{
			if(*(ptr+i)>*(ptr+j))
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}
	printf("\nSmallest number= %d",*(ptr));
	printf("\nThe Sum of given number is=%d",sum);
	getch();
}
