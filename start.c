#include <stdio.h>

int  main()
{
    float height,base,area ;
    printf("Enter base of Triangle :"); 
    scanf("%f", &base) ;
    printf("Enter height of Triangle :"); 
    scanf("%f", &height) ;
    area=(height*base)/2 ;
    printf("\nArea of Right Triangle is %.2f",area);
    return 0;
} 
