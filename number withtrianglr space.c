#include<stdio.h>
int main()
{
    int r,c=1,i,k,j,nsp,nst;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    nst=r-1;
    nsp=1;
    for(i=1;i<=2*(r-1)+1;i++)
    {
        printf("%d",c++);

    }
    printf("\n");
    for(i=1;i<=r-1;i++)
    {
        c=1;
        for(j=nst;j>=1;j--)
        {
            printf("%d",c++);
        }

        for(k=1;k<=nsp;k++)
        {
            printf(" ");
            c++;
        }
        for(j=nst;j>=1;j--)
        {
            printf("%d",c++);
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}
