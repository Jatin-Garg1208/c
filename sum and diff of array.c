// Find the difference between the sum of the odd idices and the sum of the even indices
#include<stdio.h>
int main()
{
   int n,i;
   int sum1=0,sum2=0,difference=0;
    printf("Enter the number of the size of an array");
    scanf("%d",&n);
    int  arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element no. %d",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum1+=arr[i];
        }
        else
        {
           sum2+=arr[i];
        }

    }
    if (sum1>sum2)
    {
        difference=sum1-sum2;
    }
    else
    {
        difference=sum2-sum1;
    }
     printf("\n %d",difference);

    return 0;
    }
