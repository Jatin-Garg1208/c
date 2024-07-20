#include<stdio.h>
int main()

{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    char ch,name[10];
    int len=0,vowel=0,i;
    printf("Enter String: ");
    do
    {
        ch=getchar();
        name[len]=ch;
        len++;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
    }
    while(ch!='\n'&& len<10);
    printf("The character array entered is: ");
    for ( i = 0; i < len ; i++)
    {
        printf("%c ", name[i]);
    }
    printf("\n");
    printf("String length is %d\n",len-1);
    printf("Vowel in string is %d\n",vowel);
    return 0;
}
