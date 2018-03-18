#include<stdio.h>
void main()
{
    char a[100];
    int b=0,n,i;
    printf("enter the string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z' || a[i]>='1' && a[i]<='9')
        {
            b++;
        }
    }    
     n=strlen(a);
     if(b==n)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
