//WAP to implement the operation of queue by  stragey inque and dequeue 0th item and delete the quue the given 
#include<stdio.h>
#include<conio.h>       
#include<stdlib.h>         
#define MAX 5     
int x,i;          
struct queue
{
	int item[MAX];
	int rear;
};
void ins(struct queue *pq)
{
	if(pq->rear==MAX-1)
	{
		printf("\n queue overflow");
		return;	
	}
	printf("\n input data");
	scanf("%d",&x);
	pq->rear++;
	pq->item[pq->rear]=x;
}
void del(struct queue *pq)
{
	if(pq->rear==-1)
	{
		printf("\n queue underflow");
		return;	
	}
	x=pq->item[0];
	printf("\n deleted item =%d",x);
	pq->rear--;
	
}
void display(struct queue *pq)
{
    int i;
    if(pq->rear==-1)
    {
        printf("\nqueue is empty.");
        getch();
    }
    else
    {
        printf("\nqueue is..\n");
        for(i=pq->rear;i>=0;--i)
            printf("%d\n",pq->item[i]);
    	printf("\nPress any key..");
    }
}
int main()
{
	struct queue q;
	q.rear=-1;
	int ch;
    while(1)                
    {      
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:ins(&q);break;
            case 2:del(&q);break;
            case 3:display(&q);break;
            case 4:exit(0);
            default:printf("\nPress any key....");
            getch();
        }
    }
	getch();
}
