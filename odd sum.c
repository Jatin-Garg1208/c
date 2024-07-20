#include<stdio.h>
int main()
{
    int sum=0,num,i;
    printf("Name-Jatin Garg\n BCA 1 A");
    printf("\n-------------------------------\n");
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {

            sum+=i*2-1;
    }
    printf("sum is %d",sum);
    return 0;
}
