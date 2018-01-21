#include<stdio.h>
#include<conio.h>
void main()
{
int a;
printf("enter the no. less than 100000");
scanf("%d",&a);
if(a==0)
{
printf("the no. is zero");
}
else if(a>0)
{
printf("the no. is positive");
} 
else if(a<0)
{
printf("no. is negative");
}
getch();
}

