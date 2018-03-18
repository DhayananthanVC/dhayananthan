#include<stdio.h>
void main()
{
    char a[100];
    int b=0,n,i,c=0;
    printf("enter the string");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            b++;
        }
         if(a[i]>='1' && a[i]<='9')
    }    
     n=strlen(a);
     if(b==1 && c==1)
  {
      printf("yes");
  }
  else
  {
      printf("no");
  }
