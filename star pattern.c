#include<stdio.h>
int main()
{
    int row,i,j;
    printf("Name- Jatin Garg\nBCA 1 A\n");
    printf("Enter the number of rows ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n\n");
     for(i=1;i<=row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
