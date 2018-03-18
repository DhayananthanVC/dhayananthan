
#include<stdio.h>
void main()
{
int n,x=0,y=1,i,c;
printf("enter the no. of fibonacci series");
scanf("%d",&n);
printf("%d,%d",x,y);
if(n>2)
{
for(i=1;i<n;i++)
{
c=x+y;
x=y;
y=c;
printf(",%d",c);
}
}
}
