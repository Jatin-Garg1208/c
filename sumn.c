#include<stdio.h>
int main()

{
    int i,d=0,num,newm=0,sum=0,rev=0,o_num;
    printf("Name-Jatin Garg\n BCA 1 A");
    printf("\n-------------------------------\n");
    printf("Enter the number: ");
    scanf("%d",&num);
    o_num=num;

    while(num!=0)
    {
        newm=num%10;

        sum+=newm;
        num/=10;
        d++;
    }


    printf("sum of digit %d\n",sum);

    do
    {

        rev=rev*10+o_num%10;
        o_num=o_num/10;
        d++;
    }
    while(o_num!=0);
    printf("Reverse number is %d",rev);
    return 0;
}
