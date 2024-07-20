#include<stdio.h>
int main()
{
    int r,i,j;
    printf("Enter the number of students ");
    scanf("%d",&r);
    int arr[r][3];
    printf("Enter the marks of the students\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("\n\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",arr[i][j]);

            printf("\n");
    }
    return 0;
}
