#include<stdio.h>
void main()
{int a,r,b,c=0;
printf("enter the no.");
scanf("%d",&a);
b=a;
while(b>0)
{
     r=b%10;
        c=c+(r*r*r);
        b=b/10;
}if(c==a)
{
printf("\n armstrong no.");
}
else
{
printf("\n not a armstrong no.");
}
}
