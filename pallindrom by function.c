#include<stdio.h>
void palindrome(int n);
int main()
{
    int num;
    printf("Name- Jatin Garg\nBCA 1 A\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}

void palindrome(int n)
{
    int o_num,rev=0;
    o_num=n;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==o_num)
    {
        printf("%d is a palindrome number\n\n",o_num);
    }
    else
     {
         printf("%d is not a palindrome number\n\n",o_num);
     }
    return ;
}
