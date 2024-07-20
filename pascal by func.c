#include<stdio.h>
int fact (int fact);
int combination(int n,int r);
int main()
{
    int n,i,j;
    printf("Enter the row till you want pascal triangle: ");
    scanf("%d",&n);
    printf("Pascal triangle: \n");
    for(i=0;i<=n;i++)
    {
        for(int k=0;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
           int icj = combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
  return 0;
}

int fact(int x)
{
int i,fact=1;
for(i=1;i<=x;i++)
    fact*=i;
return fact;
}

int combination(int n,int r)
{
    int combination;
    combination = fact(n)/(fact(r)*fact(n-r));
    return combination;
}
