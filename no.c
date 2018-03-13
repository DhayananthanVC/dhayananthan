#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter the no.");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
    a/=10;
    c++;
        
    }
    printf("nos in %d is %d",b,c);
}
