#include<stdio.h>
int main()
{
    int i,j,r,c=0;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    // printf("Enter the number of columns: ");
    // scanf("%d",&c);

    for(i=1;i<=r;i++)
    {
        for(j=1;j<=i;j++)
        {

            if(c==1)
            {
               c=0;
            }
            else
            {
               c=1;
            }
            printf("%d",c);
        }
          if(i%2==1)
            {
                c=1;
            }
            else
            {
                c=0;
            }
        printf("\n");
    }
    return 0;
}

