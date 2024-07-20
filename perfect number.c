#include<stdio.h>
int main()
{
    int a,i,sum;
    printf("Enter the number: ");
    scanf("%d",&a);
    sum=0;

    for (i=1; i<a; i++)
    {
        if(a%i==0)
            sum+=i;
    }
    if (sum==a)
        printf("The number %d is perfect number",a);
    else
        printf("The number %d is not a perfect number",a);
    return 0;

}
