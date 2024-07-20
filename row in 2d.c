#include<stdio.h>
int main()
{
    int r,i,c,j,x;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the values\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }
    int max=0;

    for(i=0; i<r; i++)
    {
        int sum=0;
        for(j=0; j<c; j++)
        {
            sum+=arr[i][j];
            if(max<=sum)
            {
                max=sum;
                x=i+1;
            }
        }
    }

        printf("%d Row has maximum sum that is %d",x,max);
        return 0;
}
