#include<stdio.h>
#include<stdlib.h>
#define max 5

struct stack{
	int item[max];
	int tos;
}s;

void push();
void display();
void pop();

int main(){
	s.tos=-1;	
	int choice;
	
	while(1){
		
		printf("-----------Menu--------------\n");
		printf("1.Push\n2.Display\n");
		scanf("%d",&choice);
	
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				display();
				break;
			case 3:
				pop();
				break;
			default:
				printf("Wront input\n");	
		}
	}
	return 0;
}

void push(){
	int x;
	if(s.tos>=max-1){
		printf("Stack full\n");
		return;
	}
	if(s.tos==-1){
		printf("Stack Empty\n");
	}
	
		printf("Enter data:");
		s.tos++;
		scanf("%d",&x);		
		s.item[s.tos]=x;		
}

void pop(){
	int temp;
	if(s.tos==-1){
		printf("Stack empty\n");
		return;
	}
	temp = s.item[s.tos];
	s.tos--;
	printf("Popped item = %d",temp);
}

void display(){
	int i=0;
	if(s.tos==-1){
		printf("Empty");
	}else{		
		for(i=s.tos;i>0;i--){
			printf("%d",s.item[i]);
		}
	}
}

