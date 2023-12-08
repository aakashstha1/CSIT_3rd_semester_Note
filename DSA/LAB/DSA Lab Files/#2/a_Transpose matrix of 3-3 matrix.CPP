#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int x[3][3],r,c;
	printf("\n Input X-matrix: \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	printf("\n The transpose of the X-matrix is: \n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("\t %d",x[c][r]);
		}
		printf("\n");
	}
	getch();
}