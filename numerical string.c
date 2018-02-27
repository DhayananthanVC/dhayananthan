#include<stdio.h>
#include<string.h>
void main()
{
char a[50];
int b=0,i;
printf("enter the nos");
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
    printf("\n %c",a[i]);
    if(a[i]>='0' && a[i]<='9')
{
b++;
}
}
printf("\n no. of int is %d",b);
}
