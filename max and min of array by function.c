#include<stdio.h>
int maximum(int arr[],int n);
int minimum(int arr[],int n);
int main()
{
    int n,i;
    printf("Name-Jatin Garg\nBCA 1 A");
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Maximum value is %d\n",maximum(arr,n));
    printf("Minimum value is %d\n",minimum(arr,n));
    return 0;
}
    int maximum(int arr[],int n)
    {
        int i;
        int max = arr[0];
        for (i=0;i<n;i++)
        {
            if(max<=arr[i])
                max=arr[i];
        }
        return max;
    }

     int minimum(int arr[],int n)
    {
        int i;
        int min = arr[0];
        for (i=0;i<n;i++)
        {
            if(min>=arr[i])
                min=arr[i];
        }
        return min;
    }
