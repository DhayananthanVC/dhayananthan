#include<stdio.h>
void main()
{
    int i,c=0,n,a[10]={1,2,3,4,5,6,7,8,9,10};
    printf("enter the no.");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(a[i]==n)
        {
            printf("yes ");
            break;
        }
       if(a[i]!=n)
        {
            c++;
        }
    }if(c==10)
    {
        printf("no");
    }
}
