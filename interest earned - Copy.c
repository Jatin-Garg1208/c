#include<stdio.h>

int main()
{
int amt,t,i;
printf("Enter the amount and time for deposit money in bank");
scanf("%d %d",&amt,&t);

if(t<=2)
i = (amt*4*t)/100;
else if(t>2 && t<4)
i = (amt*6*t)/100;
else
i = (amt*7*t)/100;
printf(" Rate of interest earned from bank is %d",i);
return 0;
}
