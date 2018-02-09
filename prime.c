#include<stdio.h>

void main() {
    int a,n,b=0,c;
    printf("enter the no.");
    scanf("%d",&a);
    if(a==1)
    {
        printf("neither prime nor composite");
        }
        else if(a==2)
    {
        printf(" only even prime");
    }
   
    else
    {
    for(n=2;n<a;n++)
    
    {
        c=a%n;
        
    if(c==0)
    {
        b++;
       
    }
    }
        if(b==0)
            printf("prime");
        else
            printf("not prime");
        
    }
    }
    
