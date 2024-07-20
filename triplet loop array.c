//Find the triplet number of pairs in the arrays whose sum is equal to the given number x.
#include<stdio.h>
int main()
{
    int n,i,x,j,z,total_triplet=0;
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
            for(z=j+1; z<n; z++)
            {
                if(arr[i]+arr[z]+arr[j]==x)
                {
                    total_triplet++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[z]);
                }
            }
        }
    }
    printf("Total numbers of pair whose sum %d is %d",x,total_triplet);
    return 0;


}


