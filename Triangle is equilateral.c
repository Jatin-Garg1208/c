#include<stdio.h>
void main()

{
int a,b,c;
printf("Check that triangle is equilateral or not\n");
printf("Enter the sides of triangle");
scanf("%d%d%d",&a,&b,&c);
(a==b&&b==c)? printf("Triangle is equilateral"): printf("Triangle is not equilateral");
}
