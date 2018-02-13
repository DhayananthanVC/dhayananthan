#include<stdio.h>
void main()
{
    int i,a[i],n,b=0,c;
    printf("enter the no. of elements");
    scanf("%d",&n);
        printf("enter the nos");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b=b+a[i];
    }
    c=b/n;
    printf("\n%d is median",c);
}
