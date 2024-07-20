#include<stdio.h>
int main()

{
    int o_num,num,rev=0,a,d;
    printf("Enter a number: ");
    scanf("%d",&num);
    o_num=num;
    a=0;
    d=0;
    while(num>0)
    {

        rev=rev*10+num%10;
        num=num/10;
        d++;
    }
    printf("Reverse number is %d",rev);
    printf("\n\n");

    if(rev==o_num)
    {
        printf("%d is a palindrome number\n\n",o_num);
    }
    else
     {
         printf("%d is not a palindrome number\n\n",o_num);
     }
    return 0;
}
