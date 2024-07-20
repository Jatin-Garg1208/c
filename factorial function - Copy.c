#include<stdio.h>
int fact(int num);
int main()
{
    int number;
    printf("Name- Jatin Garg\nBCA 2 A\n");
    printf("Enter the number for factorial: ");
    scanf("%d",&number);
    printf("\nFactorial of number %d is %d",number,fact(number));
    return 0;
}

int fact(int num)
{
    if(num!=0)
    return fact(num-1)*num;
  else
    return 1;
}

