#include<stdio.h>
int main()
{
    int a,b,n;
    printf("Enter the numbers: ");
    scanf("%d %d",&a,&b);
    printf("The between numbers which are multiple of 3 or 5 are: ");
    for (n=a; n<=b ; n++)
    {
        if(n%3==0 || n%5==0)
        printf("%d\n",n);
    }
    return 0;
}
