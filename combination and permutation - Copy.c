#include<stdio.h>
int factorial(int x)
{
    int fact=1;
    for (int i=1; i <= x ; i++)
        fact = fact*i;
     return fact;
}

int main()
{
    int n,r,i,ncr;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the value of r");
    scanf("%d",&r);
    ncr = factorial(n)/(factorial(r)*factorial(n-r)) ;
    printf("%d",ncr);
    return 0;


}

