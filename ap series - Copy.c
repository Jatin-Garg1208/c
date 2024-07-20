#include<stdio.h>
int main()
{
    int a,i,c;
    printf("Enter the number for making a series :");
    scanf("%d",&a);
    printf("Series is :");
    for (i=1; ;i++)
    {
        c=4*i+a;
    printf("%d, ",c);
    }
    return 0;
}

