#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#define f(x)(exp(x)-3*x)
#define e 0.0001
void main()
{float a,b,c;
do {printf ("enter guess a& b\n");
scanf("%f%f",&a,&b);}
while(f(a)*f(b)>=0);
do{c=(a+b)/2;
if(fabs(f(c))<e)
{printf("root=%f",c);
exit(0);}
if(f(a)*f(c)<0)
b=c;
else a=c;
}while(fabs(a-b)>e);
printf("root=%f",a);
getch();
}

