#include<stdio.h>
int main()
{
    int i,j,k,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // printf("Enter the number of columns: ");
    // scanf("%d",&c);
    int nsp=r/2;  // number of space
    int nst=1;    // number of star
    int ml=r/2+1; // middle line due to row is odd
    for(i=1;i<=r;i++)
    {
        for(k=1;k<=nsp;k++)
        {
            printf(" ");

        }
        for(j=1;j<=nst;j++)
        {
                printf("*");

        }
        if(i<ml)  // i is less than middle line
        {
            nsp--;
            nst+=2;
        }
        else
        {
            nsp++;
            nst-=2;
        }
       printf("\n");
    }
    return 0;
}


