#include<stdio.h>
void main()
{
    int a,b,i,c;
    printf("enter limit");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    
    {c=i%2;
        if(c%2==1)
{
    printf("\t %d",i);
}    
}
}
