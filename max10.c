#include<stdio.h>
void main()
{
int a[20],n,i,b;
printf("enter the no. of nos");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<n;i++)
{
if(b<a[i])
{
b=a[i];
}
}
printf("%d is max",b);
}
