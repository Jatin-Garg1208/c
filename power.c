#include<stdio.h>
int main()
{
    int x,n,i;
    int result=1;
    printf("Name- Jatin Garg \nBCA 1 A\n");
    printf("Enter the value of x ");
    scanf("%d",&x);
    printf("Enter the value of n ");
    scanf("%d",&n);
    i=1;
    printf("***********************************************************\n");
    while(i<=n)
    {
        result=result*x;
        i++;
    }
    printf(" %d to the power %d = %d",x,n,result);
    printf("\n***********************************************************\n");
    return 0;
}
