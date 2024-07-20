#include<stdio.h>
int main()

{
int a,b;
printf("Name: - Jatin Garg\n BCA 1 A");
printf("\n\nEnter the two numbers\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;

printf("The new number after swaping is %d  %d",a,b);
return 0;
}
