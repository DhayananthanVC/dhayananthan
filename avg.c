
#include<stdio.h>
void main()
{
    int i,a[i],n,b=0;
   
    printf("enter no. of elements needed");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    } for(i=0;i<n;i++){
   
  b=b+a[i];
        
    }
    b/=n;
    printf("%d is average",b);
}
