#include<stdio.h>
void even(int n);
int main()
{
    int num,i;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the number: ");
    scanf("%d",&num);
    even(num);
    return 0;
}

void even(int n)
{
    if(n%2==0)
       printf("Number %d is even",n);
    else
        printf("Number %d is odd",n);
}
