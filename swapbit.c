#include<stdio.h>
void main()
{
int a,b;
printf("enter the no. to swap");
scanf("%d%d",&a,&b);
printf("%d %d are no. before swap",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("%d %d are no. after swap",a,b);
}
