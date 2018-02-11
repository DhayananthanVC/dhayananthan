#include<stdio.h>
void main()
{
    int i,a[i],n;
   
    printf("enter no. of elements needed");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        
    }
   
    for(i=1;i<=n;i++)
   {
       printf("\n %d no index is %d",a[i],i);
   }
}
