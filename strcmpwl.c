#include<stdio.h>
void main()
{
char a[50],b[50];
int f,c=0,d=0,e,i;
printf("enter the strings");
scanf("%s%s",a,b);
for(i=0;a[i]!='\0';i++)
{
        f=a[i];
        
      c=c+f;  
    }
    for(i=0;b[i]!='\0';i++)
{
        e=b[i];
     
      d=d+e;  
    }
    if(d>c)
    {
        printf("%s",b);
    }else
    {
        printf("%s",a);
    }
    
}
