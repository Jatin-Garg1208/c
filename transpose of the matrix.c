#include<stdio.h>
int main()
{

    int r,c,i,j;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Base matrix is\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("\n\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",arr[i][j]);

            printf("\n");
    }
    printf("Transpose of the matrix are\n");
    printf("\n\n");
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",arr[j][i]);

            printf("\n");
    }
    return 0;
}
