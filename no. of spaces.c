#include<stdio.h>
void main()
{
char a[50];
int b=0,i;
printf("enter the string");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=' ')
{
b++;
}
}
printf(" spaces is %d",b);
}
