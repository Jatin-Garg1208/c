//second largest array
#include<stdio.h>
#include<limits.h>
int main()
{
    int n,i,max,s_max;
    max=INT_MIN;
    s_max=INT_MIN;
    printf("Enter the number of size in array: ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the number in arrays: ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
    }
 for(i=0; i<n; i++)
    {
        if (arr[i]!=max && s_max<arr[i])
        {
           s_max=arr[i];
        }
    }
printf("The second largest number is %d",s_max);
return 0;
}
