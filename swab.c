#include<stdio.h>
void main()
{
int c,d;
printf("enter the no. to swap");
scanf("%d%d",&c,&d);
printf("%d %d are no. before swap",c,d);
c=c^d;
d=c^d;
c=c^d;
printf("\n%d %d are no. after swap",c,d);
}
