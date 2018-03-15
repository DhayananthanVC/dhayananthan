#include<stdio.h>
void main()
{
char a[100],b[50];
int i,n,c=0;
printf("enter the words ");
scanf("%s%s",a,b);
for(i=0;i<=100;i++)
{
if(a[i]=='\0')
{
  
n=i;
break;
}
}
printf("%d",n);
do{
    a[n]=b[c];
    n++;
    c++;
}while(b[c]!='\0');
a[n]='\0';
printf("\n %s",a);
    }
