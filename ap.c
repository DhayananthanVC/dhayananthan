#include<stdio.h>
void main()
{
    int a,b,c,d,e;
    printf("enter n terms first term and common difference");
    scanf("%d%d%d",&a,&b,&c);
    d=b+((a-1)*c);
    e=(a*(b+d))/2;
    printf("\n sum is %d",e);
    
}
