#include<stdio.h>
int main()

{
int a,b,g;
printf("Name: - Jatin Garg\n BCA 1 A\n");
printf("Enter the two numbers\n");
scanf("%d%d",&a,&b);

g=a;
a=b;
b=g;

printf("The new number after swaping is %d  %d",a,b);
return 0;
}
