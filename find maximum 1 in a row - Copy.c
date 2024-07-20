#include<stdio.h>
int main()
{
    int r,i,c,j,max_count=0,x;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Enter the values in 0 and 1\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            if(arr[i][j]!=0&&arr[i][j]!=1)
            {
                printf("Invalid number enter");
                return 1;
            }
    }

    printf("\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }
     for(i=0; i<r; i++)
    {
        int count=0;
        for(j=0; j<c; j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
            if(max_count<=count)
            {
                max_count=count;;
                x=i+1;
            }
        }
    }
        printf("%d Row has maximum number of one that is %d",x,max_count);
        return 0;
}

