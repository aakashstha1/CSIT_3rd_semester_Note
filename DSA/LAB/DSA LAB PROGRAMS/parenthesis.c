/*parenthesis program
eg:[a+b{a-c(a+a)}]
if brackets open stack push otherwise pop*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 100

int stack[max],top=-1;
int push();
int pop();
int display();

int main()
{
	char a[100];
	printf("\nWrite an expression to start a program : ");
	gets(a);
	printf("\n %s",a);
	char c;
	int count=0;
	while((c=(a[count]))!='\0')
	{
	{
		
		if(c=='{' || c =='(' || c =='[')
		push();
		
		else if(c =='}' ||c ==')' || c ==']')
		pop();
		
		else
		display();
	}
		count++;

	getch();	
}
}


int push()
{
	int val;
    if(top==max-1)
    {
        printf("\nStack is full.");
        getch();
    }
    else
    {
    	printf("Open bracket found");
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("\nPress enter  key.... twice \n\n");
        getch();
    }
}

int pop()
{
    if(top==-1)
    {
        printf("\nStack is empty.");
        printf("\nEquation have ERROR ... Close Bracket is more");
        getch();
    }
    else
    {
    	printf("\nBrackets closed found");
        printf("\nDeleted element is %d\n",stack[top]);
        top=top-1;
         printf("\nPress enter  key.... twice \n\n");
        getch();
    }
}


int display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty.");
        getch();
    }
    else
    {
    	printf("\nBrackets not found");
        printf("\nStack is..\n");
        for(i=top;i>=0;--i)
         {
         	printf("%d\n",stack[i]);
         	if(stack[i]==0)
         	{
         		printf("\nEquation correct");
}
         	else
    		{
    
         		printf("\nError in brackets");
         	}
         }
         

    printf("\nPress enter key twice ..\n\n");
    getch();
    }
}



