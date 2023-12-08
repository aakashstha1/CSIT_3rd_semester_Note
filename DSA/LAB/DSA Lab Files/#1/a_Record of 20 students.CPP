#include<stdio.h>
#include<conio.h>
void main()
{
	flushall();
	clrscr();
	int i;
	typedef struct
	{
		int rn;
		char fname[10];
		char lname[10];
		char faculty[10];
		char address[10];
	}record;
	record student[20];
	printf("\n Input record of 20 students \n");
	for(i=0;i<20;i++)
	{
		printf("\n Input student record: %d",i+1);
		printf("\n Roll No.:");
		scanf("%d",&student[i].rn);
		printf("\n First Name:");
		scanf("%s",student[i].fname);
		printf("\n Last Name:");
		scanf("%s",student[i].lname);
		printf("\n Faculty:");
		scanf("%s",student[i].faculty);
		printf("\n Address:");
		scanf("%s",student[i].address);
	}
	for(i=0;i<20;i++)
	{
		printf("\n Roll No.: %d",student[i].rn);
		printf("\n First Name: %s",student[i].fname);
		printf("\n Last Name: %s",student[i].lname);
		printf("\n Faculty: %s",student[i].faculty);
		printf("\n Address: %s",student[i].address);
		printf("\n");
		printf("\n ********************");
	}
	getch();
}