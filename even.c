#include<stdio.h>

void main()
{
    int a,b,i;
    printf("enter limits");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0)
        {
            printf("\t %d ",i);
        }
    }
}
