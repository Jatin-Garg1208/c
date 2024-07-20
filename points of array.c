#include<stdio.h>
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    int n, i,sum=0,*p;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements in array: ");
    p=arr;
    for (i=0; i<n; i++)
    {
      scanf("%d",&arr[i]);
      sum+=*p;
      p++;
    }
    printf("Sum is %d",sum);
    return 0;
}
