#include<stdio.h>
int main()
{
    char name[1000],rev_name[1000];
    int i=0,j,count=0;
    printf("Name-Jatin Garg\nBCA 1 A");
    printf("Enter the name: ");
    gets(name);
    while(name[i]!='\0')
        i++;
    count=i-1;
    for(j=0;j<i;j++)
    {
        rev_name[j]=name[count];
        count--;
    }
    rev_name[j]='\0';
    printf("Reverse name is %s",rev_name);
    return 0;
}
