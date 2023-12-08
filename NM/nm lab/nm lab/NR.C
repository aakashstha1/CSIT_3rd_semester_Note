#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<process.h>
#define f(x)(exp(x)-3*x)
#define df(x)(exp(x)-3)
#define e 0.0001
void main()
{float a,b;
printf ("enter guess a\n");
scanf("%f",&a);
if(fabs(df(a))<e)
{printf("diverged\n");
exit(0);}
while(1)
{
b=a-f(a)/df(a);
if(fabs(b-a)<e)
{
printf("root=%f",a);
break;}
a=b;
}
getch();
}

