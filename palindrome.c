#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("\n enter the no. less than 1000");
    scanf("%d",&a);
    printf("\n no is %d",a);
    
        d=a/100;
        c=(a/10)-(d*10);
        b=a-(d*100)-(c*10);
        e=(b*100)+(c*10)+d;
        printf("\n %d is the reverse",e);
    if(a==e)
    {
        printf("\n palindrome");
    }
    else
    {
        printf("\n not a palindrome");
    }
        
    
}
