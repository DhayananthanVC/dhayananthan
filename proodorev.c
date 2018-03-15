#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the no.");
    scanf("%d%d",&a,&b);
    a*=b;
    if(a%2==0)
    {
        printf("%d is even",a);
    }
    else
    {
        printf("%d is odd",a);
    }
}
