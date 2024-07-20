#include<stdio.h>
int main()
{
    int r,i,c,j;
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
    printf("\n\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ",arr[i][j]);

        printf("\n");
    }
    int max=0,x,w,y,z,min=arr[0][0];

    for(i=0; i<r; i++)
    {

        for(j=0; j<c; j++)
            {
                if(max<=arr[i][j])
                {
                    max=arr[i][j];
                    x=i;
                    y=j;
                }
                if(min>=arr[i][j]){
                    min=arr[i][j];
                    w=i;
                    z=j;
                }

            }
    }
    printf("%d index=[%d][%d]\n",max,x,y);
    printf("%d index=[%d][%d]\n",min,w,z);
    return 0;
}


