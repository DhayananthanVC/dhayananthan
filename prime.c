#include<stdio.h>

void main() {
    int a,n;
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
        
    if(a%n==0)
    {
        printf("not a prime");
        break;
         }
         
    
    
    else    {
        printf("prime");
        break;
        
    }
    }
    }
    }
    
