#include<stdio.h>
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    char str[100],*p;
    int l=0;
    gets(str);
    p=str;
    while(*p!='\0')
        {
            *p++;
            l++;
        }
        printf("%d is the length of the String",l);
        return 0;
}
