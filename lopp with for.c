#include<stdio.h>
int main()
{
    int a,n;
    printf("Enter the number: ");
    scanf("%d",&a);
    for (n=1; n<=20; n++)
    {
       printf("%d*%d=%d\n",a,n,a*n);
    }

    return 0;
}
