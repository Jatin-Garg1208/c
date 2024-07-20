/* Given an array of integer, change the value of its odd indexed elements to its second multiple and increment all the the even indexed value by 10 */
#include<stdio.h>
int main()
{
   int n,i;
    printf("Enter the number of the size of an array");
    scanf("%d",&n);
    int  arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the element no. %d",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]+=10;
        }
        else
        {
           arr[i]*=2;
        }
        printf("\n %d",arr[i]);
    }
    return 0;
}
