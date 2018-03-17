#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the no ");
    scanf("%d",&a);
        b=a/100;
        c=(a/10)-(b*10);
        d=a%10;
    printf("%d %d %d",b,c,d);
    return 0;
}
