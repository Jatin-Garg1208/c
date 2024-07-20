#include<stdio.h>
#include<math.h>

int main()
{
    int a,i,n,sum;
    sum=0;
    printf("Enter the starting number :");
    scanf("%d",&a);
    printf("Enter the ending power :");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        if(i%3==0)
            sum-=pow(a,i);
        else
            sum+=pow(a,i);

    }
    printf("Sum of the Series is %d ",sum);
    return 0;
}
