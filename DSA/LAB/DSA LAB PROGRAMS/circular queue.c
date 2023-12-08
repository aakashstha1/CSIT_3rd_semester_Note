#include<Stdio.h>
#define MAXSIZE 5
void display(struct queue *);
void add(struct queue *,int);
void delet(struct queue *);
int empty(struct queue *);
int full (struct queue *);
struct queue{
	int item[MAXSIZE]={0};
	int front;
	int rear;
};
void display(struct queue *que)
{
	int i,j;
	for(i=0;i<MAXSIZE ;i++)
	{
	printf("%d\t",que->item[i]);
}
	}
	void odd(struct queue *que,int x)
	{
 if(x==0)
 {
 	printf("0 represent empty cannot insert empty");
 	return;
 }
 if(full(que))
{
	printf("\n queue overflow !!\n");
	return;
}
if(que->rear==-1 && que->front==-1)
{
	que->front=que-rear=0;
}
else
{
	que->rear=((que->rear)+1)%MAXSIZE;
}
que->item[que->rear]=x;
printf("item inserted %d",que->item[que->rear]);
printf("\n\n rear=%d front=%d",que->rear,que->front);
}
void delet(struct queue *que){
	int a;
	if(que->front==-1)
	{
		printf("queue underflow !!\n");
		return;)
	}
	q=que->item[que->front];
	que->item[que->front]=0;
	if(que->front=que->rear)
	{
		que->front=que->rear-1;
	}
	else
	{
		que->front=((que->front)+1)%MAXSIZE;
	}
	printf("The deleted item is %d",a);
	pintf("\n\n Rear=%d Front=%d",que->rear,que->front);
}
int full(struck queue *que)
{
	return(que->front=((que->rear)+1)%MAXSIZE)? 1:0;
}
