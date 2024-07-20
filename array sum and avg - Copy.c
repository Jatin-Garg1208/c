#include<stdio.h>
int main()
{
    int n,i;
    float sum=0,avg=0;
    printf("Name-Jatin Garg\nBCA 1 A");
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    float arr[n];
    for (i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("Sum of array is %.1f\n",sum);
    printf("Average of array is %.1f\n",avg);
    return 0;
}
