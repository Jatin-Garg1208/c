#include<stdio.h>
int main()
{
    int r,i,c,j;
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
    int sum=0;

    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
            sum+=arr[i][j];
    }

    printf("%d",sum);
    return 0;
}

