#include<stdio.h>
void main()
{
int a[10],i,b;
printf("enter the nos");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<10;i++)
{
if(b<a[i])
{
b=a[i];
}
}
printf("%d is max",b);
}
