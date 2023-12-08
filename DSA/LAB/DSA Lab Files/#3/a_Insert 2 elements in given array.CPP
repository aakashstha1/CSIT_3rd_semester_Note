#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5]={1,2,3,4,5};
	int b[7];
	int i,j=0,x,y;

	printf("\n Given list of array is: ");
	for(i=0;i<5;i++)
	printf("%d \t",a[i]);
	printf("\n Enter two element to be inserted after third position the above array: ");
	scanf("%d",&x);
	scanf("%d",&y);
	for(i=0;i<5;i++)
	{
		b[j]=a[i];
		j++;
		if(i==2)
		{
			b[j]=x;
			j++;
			b[j]=y;
			j++;
		}
	}
	printf("\n The new array is: \n");
	for(i=0;i<7;i++)
	{
		printf("%d \t",b[i]);
	}
	getch();
}