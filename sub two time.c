#include<stdio.h>

void main()
{
    int a,b,c,d,e,f;
    printf(" hours and minutes\n");
    scanf("%d%d",&a,&b);
    printf(" hours and minutes\n ");
    scanf("%d%d",&c,&d);
    if(a>c)
    {
    e=(a-c);
    printf("%d hours",e);
    }
    else
    {
    e=(c-a);
    printf("%d hours",e);
    }
    if(b>d)
    {
    f=(b-d);
    printf("%d min",f);
    }
    else
    {
    f=(d-b);
    printf("%d min",f);
    }
}
