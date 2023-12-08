#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[5],i,k,temp;
	printf("\n Input 5 integer nos. = ");
	for(i=0;i<=4;i++)
		scanf("%d",&x[i]);
	for(i=0;i<=3;i++)
	{
		for(k=i;k<=4;k++)
		{
			if(x[k]>x[i])
			{
				temp=x[i];
				x[i]=x[k];
				x[k]=temp;
			}
		}
	}
	printf("\n %d is largest no.",x[0]);
	printf("\n %d is smallest no.",x[4]);
	getch();
}