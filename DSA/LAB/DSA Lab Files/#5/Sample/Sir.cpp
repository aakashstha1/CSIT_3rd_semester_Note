#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
	int id;
	char name[20];
	int amt;
	}rec;
rec user, *ptr=&user, *temp;
int nor=0, i;

void add()
{
	int n;
	printf("\n How many records do you want to add?");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the information");
		printf("\n ID: ");
		scanf("%d",&(ptr+i)->id);
		fflush(stdin);
		printf("\n Name; ");
		scanf("%s",(ptr+i)->name);
		fflush(stdin);
		printf("\n Amount: ");
		scanf("%d",&(ptr+i)->amt);
		nor++;
	}
}

void del()
{
	int did, i, alt;
	printf("\n Enter id to delete");
	scanf("%d",&did);
	for(i=0, alt=0;i<nor;i++, alt++)
	{
		if((ptr+alt)->id==did)
		{
			alt--; nor--;
			printf("Record deleted");
		}
		else
		{
			(ptr+alt)->id=(ptr+i)->id;
			strcpy((ptr+alt)->name,(ptr+i)->name);
			(ptr+alt)->id=(ptr+i)->amt;
		}
	}
}
void modify()
{
	int mid, i;
	printf("\n Enter id to modify");
	scanf("%d",&mid);
	for(i=0;i<nor;i++)
	{
		if((ptr+i)->id==mid)
		{
			printf("\n Enter the information");
			printf("\n ID: ");
			scanf("%d",&(ptr+i)->id);
			fflush(stdin);
			printf("\n Name; ");
			scanf("%s",(ptr+i)->name);
			fflush(stdin);
			printf("\n Amount: ");
			scanf("%d",&(ptr+i)->amt);
			printf("\nRecord modified");
		}
	}

}


void main(void)
{
	clrscr();

	int choice;



	while(1)
	{
		printf("\n Menu\ni) Add customer\nii) Delete\niii) Modify\niv) Exit");
		printf("\n Enter your choice");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				add();
				break;
			}
			case 2:
			{
				del();
				break;
			}
			case 3:
			{
				modify();
				break;
			}
			case 4:
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

