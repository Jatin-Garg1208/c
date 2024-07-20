#include<stdio.h>
int main()
{
    int n,i,product=1;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the element no.  %d ",i+1);
        scanf("%d",&arr[i]);
        product*=arr[i];
    }
    printf("\nProduct of all elements in array is %d",product);
    return 0;
}
