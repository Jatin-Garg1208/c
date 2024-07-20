#include<stdio.h>
int main()
{
    float sum=0,num,i;
    printf("Name-Jatin Garg\n BCA 1 A");
    printf("\n-------------------------------\n");

    printf("Enter the number: ");
    scanf("%f",&num);

    for(i=1; i<=num; i++)
    {
        sum+=(1/i);
    }
    printf("sum is %.2f",sum);
    return 0;
}
