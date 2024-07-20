#include<stdio.h>
int main()
{
    FILE *f1;
    char c;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Data Input\n\n");

    f1 = fopen("INPUT.txt", "w");

    while((c=getchar()) != '\n')
        putc(c,f1);

    fclose(f1);
    printf("\nData Output\n\n");

    f1 = fopen("INPUT.txt","r");

    while((c=getc(f1)) != EOF)
        printf("%c",c);
        printf("\n");
    fclose(f1);
    return 0;
}

