#include<stdio.h>
void main()
{
char a[50];
int b=1,i;
printf("enter the sentence");
scanf("%[^\n]",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
{
b++;
}
}
printf("%d words",b);
}
