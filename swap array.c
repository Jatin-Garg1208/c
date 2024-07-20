#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of size in array: ");
    scanf("%d",&n);
    int arr[n],brr[n];
    printf("\nEnter the number in arrays: ");
    for (i=0; i<n; i++)
    {
       scanf("%d",&arr[i]);
    }
    for (i=0;i<=n-1;i++)
    {
        brr[i]=arr[n-i-1];
    }
      for (i=0;i<=n-1;i++)
    {
        printf("%d\n",brr[i]);
    }

    return 0;
}
