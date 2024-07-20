#include<stdio.h>
int main()
{
    FILE *f1;
    int n,i;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Data Input\n\n");

    f1 = fopen("Input number.txt", "w");

    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        putw(n,f1);
    }

    fclose(f1);
    printf("\nData Output\n\n");

    f1 = fopen("Input number.txt","r");

    while((n=getw(f1)) != EOF)
        printf("%d ",n);
        printf("\n");
    fclose(f1);
    return 0;
}

