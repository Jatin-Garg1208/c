#include<stdio.h>
int main()
{
    int n,i,x,int_count=0;
    printf("Enter the number of the size of an array: ");
    scanf("%d",&n);
    int  arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element no. %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number of elements greater you count: ");
    scanf("%d",&x);
    for (i=0;i<n;i++)
    {
        if(i>x)
        {
            int_count++;

        }
    }
     printf("\n %d",int_count);
    return 0;
}
