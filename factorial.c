#include<stdio.h>
void main()
{
    int a,n=1,i;
    printf("enter the factorial no. needed");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        n=n*i;
    }
printf("\n factorial is %d",n);
    
}
