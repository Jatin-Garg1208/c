#include<stdio.h>
#include<math.h>

int main()
{
    int fact,a,sum,i;
    fact=1;
    sum=0;
    printf("Enter ending number of the factorial :");
    scanf("%d",&a);
    for (i=1; i<=a; i++)
    {
        fact*=i;
        sum+=fact;
    }
    printf("Sum of factorial is %d",sum);
    return 0;
}
