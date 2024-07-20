#include<stdio.h>
int main()
{
     int n,item,i;
    printf("Name - Jatin Garg\nBCA 1 A\n");
    printf("Enter the number of size in array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to search: ");
    scanf("%d",&item);
    for(i=0;i<=n;i++)
    {
        if(item==arr[i])
        {   printf("Search is successful\n");
            printf("The number %d is available on index %d",item,i);
            break;
        }
         if(i==n)
            printf("The number %d is not available in array",item);
    }
    return 0;
}
