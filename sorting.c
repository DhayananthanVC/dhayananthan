#include<stdio.h>
void main()
{
    int i,a[i],j,n,b;
    printf("enter elements to sort");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
 for(i=0;i<n;i++)
 {
     
 
  for(j=0;j<n;j++)
 {
    if(a[i]<a[j])
    {
        b=a[i];
        a[i]=a[j];
        a[j]=b;
    }
  }
}
 printf("sorted array is");
 for(i=0;i<n;i++)
 {
     printf(" %d",a[i]);
 }
    
}
