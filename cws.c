#include<stdio.h>
void main()
{
char a[50];
int b=0,i;
printf("enter the string to count");
scanf("%[^\n]s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!=' ')
{
b++;
}
}
printf("\n %d words",b);
}
