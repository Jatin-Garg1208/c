#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,r,c,d,sum,n;
    printf("Enter the number for making a series: ");
    scanf("%d",&a);
    printf("Enter the ratio for making the series: ");
    scanf("%d",&b);
    printf("Geometric progression series of %d is:-\n",a);
    for (r=0; r<10 ; r++)
    {
        d= a*pow(b,r);
        printf("%d, ",d);
    }
    printf("\b\n\n");

    printf("Sum of the GP series of %d is \n",a);
    sum = (a*(pow(b,10)-1))/(b-1);
    printf("Sum is %d: ",sum);
    printf("\n\n");

    printf("Find nth term by asking from user \n");
    printf("Enter nth term :");
    scanf("%d",&n);
    n=a*pow(b,n-1);
    printf("Nth term is %d :",n);
    printf("\n\n");

    return 0;
}

