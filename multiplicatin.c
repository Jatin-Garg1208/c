
#include<stdio.h>
int main()
{
    int a,b,r,i;
    printf("Enter two number for product :");
    scanf("%d  %d",&a,&b);
    printf("product is :");
    r=0;
    for(i=1; i<=b; i++)
    {
        r+=a;
        }
        printf("%d * %d = %d",a,b,r);
    return 0;
}
