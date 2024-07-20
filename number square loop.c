
#include<stdio.h>
int main()
{
    int r,i,j,min,a,b,p;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    min=0;
    for(i=1;i<=2*r-1;i++)
    {
        for(j=1;j<=2*r-1;j++)
        {
            a=i;
            b=j;
             if(i>r)
       {
            a=2*r-i;
       }
            if(j>r)
       {
            b=2*r-j;
       }
               if(a<b)
                min=a;
            else
                min=b;

                p=r+1-min;
                printf("%d",p);
        }
        printf("\n");
    }

    return 0;
}
