#include<stdio.h>


int main()
{
    int r,c,j,i;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    // printf("Enter number of columns: ");
    // scanf("%d",&c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=r; j++)
        {
            c=r/2+1;
            if(j==c||i==c)
               {
                  printf("*");
               }
            else
            {
               printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

