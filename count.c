#include<stdio.h>
void main()
{
int a,i,n=2;
printf("enter the no.");
scanf("%d",&a);
if(a<10)
{
printf("\n 1 digit no.");
}
else
{
for(i=10;i<=a;)
{
if((a/i)<10)
{

printf("\n %d digit no.",n);
break;
}
else
{
n++;
i=i*10;
}
}
}
}

