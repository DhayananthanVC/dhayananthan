#include<stdio.h>
#include<math.h>
void main()
{
int a,b,i,c=0;
printf("enter the element");
scanf("%d",&a);
for(i=0;i<100;i++)
{
    b=pow(2,i);
if(a==b)
{
    printf("yes");
    break;
}
else
{
    c++;
}
}
if(c==100)
{
    printf("no");
}
}
