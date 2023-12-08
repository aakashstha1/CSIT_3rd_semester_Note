#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int day;
	int month;
	int year;
}date;

typedef struct
{
	int bid;
	char bname[10];
	char bauthor[10];
	char stdn[10];
	date dob;
}rec;
rec lib[20];

rec lib, *ptr=&lib, *temp;
int nor=0, i;

/*
void ins()
{
	int n;
	printf("\n How many records do you want to add? \n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the Information: \n");
		printf("\n Book ID Nro.: ");
		scanf("%d",&(ptr+i)->id);
		fflush(stdin);
		printf("\n Name: ");
		scanf("%s",(ptr+i)->name);
		fflush(stdin);
		printf("\n Fee: ");
		scanf("%d",&(ptr+i)->fee);
		nor++;
	}
}

void del()
{
	int did, i, alt;
	printf("\n Enter ID no. to delete: ");
	scanf("%d",&did);
	for(i=0, alt=0;i<nor;i++, alt++)
	{
		if((ptr+alt)->id==did)
		{
			alt--; nor--;
			printf(".........Record deleted........");
		}
		else
		{
			(ptr+alt)->id=(ptr+i)->id;
			strcpy((ptr+alt)->name,(ptr+i)->name);
			(ptr+alt)->id=(ptr+i)->fee;
		}
	}
}
void modify()
{
	int mid, i;
	printf("\n Enter ID no. to modify: ");
	scanf("%d",&mid);
	for(i=0;i<nor;i++)
	{
		if((ptr+i)->id==mid)
		{
			printf("\n Enter the information");
			printf("\n ID No.: ");
			scanf("%d",&(ptr+i)->id);
			fflush(stdin);
			printf("\n Name: ");
			scanf("%s",(ptr+i)->name);
			fflush(stdin);
			printf("\n Fee: ");
			scanf("%d",&(ptr+i)->fee);
			printf("\n.......... Record modified.........");
		}
	}

}
*/

void main(void)
{
	clrscr();
	int choice;

	while(1)
	{
		printf("\n Menu\n1) Add \n2) Delete\n3) Display\n4) Update\5) Exit");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				ins();
				break;
			}
			case 2:
			{
				del();
				break;
			}
			case 3:
			{
				disp();
				break;
			}
			case 4:
			{
				upd();
				break;
			}
			case 5:
			{
				printf("\n You chose to exit, press any key to end . . .");
				getch();
				exit(1);
			}
			default:
			{
				printf("\n Wrong input. Press any key and please try again");
				getch();
			}
		}
	}
}