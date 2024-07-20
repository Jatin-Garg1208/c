#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,r,l,c=1;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // printf("Enter the number of columns: ");
    // scanf("%d",&c);

    for(i=1;i<=r;i++)
    {            c=i-1;
        for(k=1;k<=r-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
                printf("%c",j+64);

        }
        for(l=1;l<i;l++)
        {
            printf("%c",c+64);
            c--;
        }
        printf("\n");
    }
    return 0;
}


