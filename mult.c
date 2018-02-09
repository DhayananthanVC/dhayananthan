#include<stdio.h>
void main()
{
    int a,i,b,c;
    printf("enter the no. and multiples needed");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        c=a*i;
        printf("\n %d*%d=%d",a,i,c );
    }
    
}
