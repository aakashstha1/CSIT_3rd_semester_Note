#include<stdio.h>
#include<conio.h>
typedef struct
{
	int maths;
	int chem;
	int phy;
	int eng;
	int comp;
}marks;

typedef struct
{
	char name[10];
	int rn;
	marks sub;
	float percent;
}record;

record std[10],temp;

void main()
{
	clrscr();
	void input(void);
	void output(void);

	input();
	output();
	getch();
}

void input(void)
{
	int i;
	printf("\n Input the marks record of 10 students: \n");
	for(i=0;i<2;i++)
	{
		printf("\n Enter Name: ");
		scanf("%s",std[i].name);
		printf("\n Enter Roll No: ");
		scanf("%d",&std[i].rn);

		printf("\n Enter marks in: ");
		printf("\n Physics: ");
		scanf("%d",&std[i].sub.phy);
		printf("\n Maths:");
		scanf("%d",&std[i].sub.maths);
		printf("\n Chemistry: ");
		scanf("%d",&std[i].sub.chem);
		printf("\n English: ");
		scanf("%d",&std[i].sub.eng);
		printf("\n Enter Computer: ");
		scanf("%d",&std[i].sub.comp);
		printf("\n *********************** \n\n");
	}
}

void output(void)
{
	int i,j;
	for(i=0;i<2;i++)
	{
		std[i].percent=(std[i].sub.phy+std[i].sub.maths+std[i].sub.chem+std[i].sub.eng+std[i].sub.comp)/5;
	}

	for(i=1;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			if(std[j].percent<std[j+1].percent)
			{
				temp=std[j];
				std[j]=std[j+1];
				std[j+1]=temp;
			}
		}

	}

	for(i=0;i<2;i++)
	{
		printf("\n Rank      : %d",i+1);
		printf("\n Name      : %s",std[i].name);
		printf("\n Roll No   : %d",std[i].rn);
		printf("\n Percentage: %f",std[i].percent);
		printf("\n ********************** \n\n");
	}
}