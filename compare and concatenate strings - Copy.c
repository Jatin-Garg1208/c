#include<stdio.h>
int main()
{
    char name[100],an_name[100];
    int i=0,j;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the name: ");
    gets(name);
    printf("Enter the another name: ");
    gets(an_name);
    for(i=0; name[i]!='\0'&& an_name[i]!='\0'; i++)
    {
        if(name[i]!=an_name[i])
        {
            printf("Strings are not equal\n");
            break;
        }
    }
    if(name[i]=='\0'&& an_name[i]=='\0')
        printf("Strings are equal\n");
    else
    {
        printf("Strings are not equal\n");
    }

    i=0;
    while(name[i]!='\0')
        i++;
    for(j=0; an_name[j]!='\0'; j++)
    {
        name[i]=an_name[j];
        i++;
    }
    name[i]='\0';
    printf("%s\n",name);
    printf("%s\n",an_name);
    return 0;
}
