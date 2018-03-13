
#include<stdio.h>
void main()
{
    int i,a[i],n,b,c;
    printf("enter no. of elements needed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    b=a[n];
    c=a[n];
    for(i=1;i<=n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        } 
        if(c>a[i])
        {
            c=a[i];
        }
    }
    printf("\n %d is maximum",b);
     printf("\n %d is minimum",c);
    
}
