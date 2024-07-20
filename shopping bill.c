#include<stdio.h>
int main()
{
int cost,qty,amt,disc,n_amt;
printf("Enter the cost and quantity of the product :");
scanf("%d%d",&cost,&qty);
amt = cost*qty;
printf("amount of the product is %d\n\n",amt);

if(amt<=1000)
{
    disc=0;
printf("Discount is %d\n\n",disc);
}
if(amt<=2500&& amt>1000)
{
disc= 10*amt/100;
printf("discount is %d\n\n",disc);
}
if(amt>2500)
{
disc=15*amt/1000;
printf("discount is %d\n\n",disc);
}
n_amt= amt-disc;
printf("Net amount of the product is %d\n\n",n_amt);
return 0;
}
