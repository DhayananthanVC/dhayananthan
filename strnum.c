#include<stdio.h>
void main()
{
char a[50];
int b=0,i,n;
printf("enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0' && a[i]<='9')
{
b++;
}
n=i+1;
}
printf("\n %d %d",b,n);
if(b==n)
{
printf("string %s is numeric",a);
}
else
{
    printf("string %s is not numeric",a);
}
}
