#include<stdio.h>
int main()
{
    int r,i,c,j,w,x,y,z,sum=0;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the values\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Enter the number where you start row ");
    scanf("%d",&w);
    printf("Enter the number where you start coloumn ");
    scanf("%d",&x);
    printf("Enter the number where you end row ");
    scanf("%d",&y);
    printf("Enter the number  where you end column ");
    scanf("%d",&z);
    if (w < 1 || y > r || x < 1 || z > c || w > y || x > z) {
    printf("Invalid input for start and end positions.");
    return 1;
}

    printf("\n\n");
    for(i=w-1; i<=y-1; i++)
    {
        for(j=x-1; j<=z-1; j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }
    for(i=w-1; i<=y-1; i++)
    {
        for(j=x-1; j<=z-1; j++)
            sum+=arr[i][j];

        printf("\n");
    }
    printf("%d",sum);
    return 0;
}



