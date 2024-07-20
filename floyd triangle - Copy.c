#include<stdio.h>
int main()
{
    int i,j,r,c;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // printf("Enter the number of columns: ");
    // scanf("%d",&c);
     c=1;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d",c);
           c=c+2;
        }
        printf("\n");
    }
    return 0;
}

