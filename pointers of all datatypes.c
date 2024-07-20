#include<stdio.h>
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    int num ,*i;
    float num1,*f;
    char str[10],*d;

    printf("Enter integer: ");
    scanf("%d",&num);
    printf("Enter float: ");
    scanf("%f",&num1);
    printf("Enter character: ");
    scanf("%s",str);
    i=&num;
    f=&num1;
    d=str;
    printf("%d is on the address of %u\n",*i,&num);
    printf("%f is on the address of %u\n",*f,&num1);
    printf("%s is on the address of %u\n",d,&str);
}
