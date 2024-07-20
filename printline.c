#include<stdio.h>
void printline(int n,int ch);
int main()
{
    int ch,n;
    printf("Name-Jatin Garg\n BCA 1 A");
    printf("\n-------------------------------\n");
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("Enter the character\n");
    scanf(" %c",&ch);
    printline(n,ch);
    return 0;
}

void printline(int k,int c)
{
    int i;

    for (i=1; i<=k; i++)
    {
        printf("%c  ",c);

    }
}
