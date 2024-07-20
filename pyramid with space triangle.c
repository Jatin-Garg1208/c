#include<stdio.h>
int main()
{
    int r,c,i,k,j,nsp;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    c=r-1;
    nsp=1;
    for(i=1;i<=2*(r-1)+1;i++)
    {
        printf("*");

    }
    printf("\n");
    for(i=1;i<=r-1;i++)
    {
        for(j=c;j>=1;j--)
        {
            printf("*");
        }

        for(k=1;k<=nsp;k++)
        {
            printf(" ");
        }
        for(j=c;j>=1;j--)
        {
            printf("*");
        }
        nsp+=2;
        c--;
        printf("\n");
    }
    return 0;
}
