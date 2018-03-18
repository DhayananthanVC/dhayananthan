#include<stdio.h>
void main()
{
    int a,b;
    printf("a &b");
    scanf("%d%d",&a,&b);
      printf("%d & %d are values before swap",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n%d & %d are values after swap",a,b);
}
