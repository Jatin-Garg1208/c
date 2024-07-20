#include<stdio.h>
#include<string.h>
int main()
{
    char name[100],an_name[100],copy_name[100];
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the name: ");
    gets(name);
    printf("%d is the length of the string %s",strlen(name),name);
    printf("\nEnter the another name: ");
    gets(an_name);
    printf("%d is the length of the string %s",strlen(an_name),name);
    printf("\nCopy string is %s",strcpy(copy_name,name));
    printf("\nConcatenate string is %s",strcat(name,an_name));
    printf("\nReturn value of string is %d",strcmp(name,an_name));
    return 0;
}
