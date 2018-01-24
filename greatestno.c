#include<stdio.h>
#include<conio.h>
void main()
{
int i,a[i],b=0;
printf("enter the no 1,2 and 3");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{

if(b>a[i])
{
b=a[i+1];
}
else
{
b=a[i];
}
}
printf("%d is greater",b);
getch();
}
