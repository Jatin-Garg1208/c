#include<stdio.h>
int main()
{

    int r,c,i,j,temp,k;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Base matrix is\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Wave print is ");
    for(i=0; i<r; i++)
    {
        if(i%2==0)
        {
            for(j=0; j<c; j++)
                printf("%d ",arr[i][j]);
            printf("\n");
        }
        if(i%2==1)
        {
            for(j=c-1; j>=0; j--)
                printf("%d ",arr[i][j]);
            printf("\n");

        }

    }
    return 0;
}



