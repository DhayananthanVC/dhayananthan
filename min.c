#include<stdio.h>
void main()
{
    int i,a[i],n,b;
    printf("enter no. of elements needed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    b=a[n];
    for(i=1;i<=n;i++)
    {
        if(b>a[i])
        {
            b=a[i];
        }
    }
    printf("\n %d is minimum",b);
    
}
