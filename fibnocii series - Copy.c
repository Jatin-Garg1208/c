#include<stdio.h>
int fib(int n);
int main()

{
    int number,i;
    printf("Name-Jatin Garg\nBCA 2 A\n");
    printf("Enter the number til you want Fibonacci series: ");
    scanf("%d",&number);
    printf("The Fibonacci series:- ");
    for(i=0; i<number; i++)
        printf("%d ",fib(i));
    return 0;
}
int fib(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
