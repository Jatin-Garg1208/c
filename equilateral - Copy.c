#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Check the triangle is equilateral or not");
     printf("\n\nEnter the all sides of Triangle");
    scanf("%d %d %d ",&a ,&b ,&c);

    if(a==b&&b==c)
      printf("\n\nTriangle is equilateral");
      else if(a==b||a==c||c==b)
     printf("\n\nTriangle is isoselce");
     else
     printf("\n Triangle is scalen");
    return 0;

}
