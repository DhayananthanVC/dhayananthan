#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the no. to swap");
scanf("%d%d",&a,&b);
printf("%d %d are no. before swap",a,b);
c=a;
a=b;
b=c;
printf("%d %d are no. after swap",a,b);
}
