#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float sum,a,b;
    sum=0;
    printf("Enter a number of the series :");
    scanf("%f",&a);
    printf("Enter a number of the series :");
    scanf("%d",&n);
    for (i=1; i<=n; i++)
    {
        if(i%2==1)
        {
            b= a/i;
            sum+=b;
        }
        else
        {
            b= a/i;
            sum-=b;
        }
    }
    printf("Sum of factorial is %.2f",sum);
    return 0;
}

