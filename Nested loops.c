//Find the total number of pairs in the arrays whose sum is equal to the given number x.
#include<stdio.h>
int main()
{
    int n,i,x,j,total_pair=0;
    printf("Enter the number of size in array: ");
    scanf("%d",&n);
    printf("\nEnter the number whose equal pair sum is required: ");
    scanf("%d",&x);
    int arr[n];
    printf("\nEnter the number in arrays: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {


        for(j=i+1; j<n; j++)
        {
            if(arr[i]+arr[j]==x)
            {
                total_pair++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("Total numbers of pair whose sum %d is %d",x,total_pair);
    return 0;


}

