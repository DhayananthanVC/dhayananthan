#include<stdio.h>
void main()
{
    int a,b,c,i,j,d;
    printf("enter the limits");
    scanf("%d%d",&a,&b);
    for(i=a+1;i<b;i++)
    {
        d=0;
        for(j=2;j<i;j++)
        {
            c=i%j;
           
            if(c==0)
            {
            ++d;

            
            }
        }
            if(d==0)
            {
                printf("\n %d",i);
        }
    }
}
