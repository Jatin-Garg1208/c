#include<stdio.h>
#define ROW 2
#define COL 2
void addmatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL]);
void submatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL]);
void multiplymatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL]);
void transposematrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL]);

int main()
{
    int matrix_a[ROW][COL],i,j;
    int matrix_b[ROW][COL];
    int operation;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the matrix a: \n");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&matrix_a[i][j]);
        }

    }
    printf("Enter the matrix b: \n");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            scanf("%d",&matrix_b[i][j]);
        }

    }
    printf("Enter your choice: ");
    scanf("%d",&operation);
    switch (operation)
    {
    case 1:
        addmatrix(matrix_a,matrix_b);
        break;
    case 2:
        submatrix(matrix_a,matrix_b);
        break;
    case 3:
        multiplymatrix(matrix_a,matrix_b);
        break;
    case 4:
        transposematrix(matrix_a,matrix_b);
        break;
    default:
        printf("Invalid choice enter");

    }
    return 0;
}

void addmatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL])
{
    int resultmatrix[ROW][COL];
    int i,j;
    for (i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            resultmatrix[i][j]=matrix_a[i][j]+ matrix_b[i][j];
    printf("Addition of matrix is: \n");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",resultmatrix[i][j]);
        }
        printf("\n");
    }
    return;
}

void submatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL])
{
    int resultmatrix[ROW][COL];
    int i,j;
    for (i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            resultmatrix[i][j]=matrix_a[i][j]- matrix_b[i][j];
    printf("Subtraction of matrix is: \n");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",resultmatrix[i][j]);
        }
        printf("\n");
    }
    return;
}

void multiplymatrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL])
{
    int resultmatrix[ROW][COL];
    int i,j,k;
    for (i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
        {
            resultmatrix[i][j]=0;
            for(k=0; k<COL; k++)
                resultmatrix[i][j]+=matrix_a[i][k]* matrix_b[k][j];
        }
    printf("Multiply of matrix is:\n ");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",resultmatrix[i][j]);
        }
        printf("\n");
    }
    return;
}
void transposematrix(int matrix_a[ROW][COL],int matrix_b[ROW][COL])
{
    int transposematrix_a[ROW][COL];
    int transposematrix_b[ROW][COL];
    int i,j;
    for (i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            transposematrix_a[i][j]=matrix_a[j][i];
    printf("Transpose Result of matrix a is: \n");
    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",transposematrix_a[i][j]);
        }
        printf("\n");
    }
    for (i=0; i<ROW; i++)
        for(j=0; j<COL; j++)
            transposematrix_b[i][j]=matrix_b[j][i];
    printf("Transpose Result of matrix b is: \n");

    for (i=0; i<ROW; i++)
    {
        for(j=0; j<COL; j++)
        {
            printf("%d ",transposematrix_b[i][j]);
        }
        printf("\n");
    }
    return;
}

