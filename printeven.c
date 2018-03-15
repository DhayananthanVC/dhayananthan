#include<stdio.h>
void main()
{
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("%d",a);
    }
    else
    {
        printf("%d",a-1);
    }
}
