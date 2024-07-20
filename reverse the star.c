#include<stdio.h>
int main()
{
    int r,i,c,j,k;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    c=r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=c;k>=1;k--)
        {
            printf("*");
        }
        c--;
        printf("\n");
    }
    return 0;
}
