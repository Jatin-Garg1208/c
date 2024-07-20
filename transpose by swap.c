#include<stdio.h>
int main()
{

    int r,c,i,j,temp;
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
    for(i=0;i<r;i++)
        for(j=i;j<c;j++)
        {

            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    printf("Transpose of the matrix are\n");
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",arr[i][j]);

            printf("\n");
    }
    return 0;
}

