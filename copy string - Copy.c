#include<stdio.h>
int main()
{
    char name[100],an_name[100];
    int i;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the name: ");
    gets(name);
    for(i=0; name[i]!='\0'; i++)
    {
        an_name[i]=name[i];
    }
    an_name[i] = '\0';
    printf("Original String:  %s\n",name);
    printf("Copied String:    %s\n",an_name);
    return 0;
}
