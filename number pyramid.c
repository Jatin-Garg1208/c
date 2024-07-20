#include<stdio.h>
int main()
{
    int i,j,k,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // printf("Enter the number of columns: ");
    // scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        c=1;
        for(k=1;k<=r-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
                printf("%d",c++);
        }
        printf("\n");
    }
    return 0;
}


