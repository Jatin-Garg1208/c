#include<stdio.h>
int main()
{

    int a,b,r,c,i,j,k;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("First matrix is\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Enter the number of rows ");
    scanf("%d",&a);
    printf("Enter the number of columns ");
    scanf("%d",&b);
    int brr[a][b];
    printf("Second matrix is\n");

    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
            scanf("%d",&brr[i][j]);
    }
    if(c!=a)
    {
        printf("Multiply of matrix is not possible");
        return 0;
    }
    int result[r][b];
    printf("Transpose of the matrix are\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<b; j++)
        {
              result[i][j]=0;
              for(k=0;k<c;k++)
              {
                  result[i][j]+=arr[i][k]*brr[k][j];
              }
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
        return 0;
    }


