#include<stdio.h>
int main()
{

    int qty,ppu,item,price;
    scanf("%d",&item);
    scanf("%d",&ppu);
    scanf("%d",&qty);
    price=qty*ppu;

    int qty1,ppu1,item1,price1;
    scanf("%d",&item1);
    scanf("%d",&ppu1);
    scanf("%d",&qty1);
    price1=qty1*ppu1;

    int qty2,ppu2,item2,price2;
    scanf("%d",&item2);
    scanf("%d",&ppu2);
    scanf("%d",&qty2);
    price2=qty2*ppu2;

    printf("\n\nName - Jatin Garg\n BCA 1 A");
    printf("/n/nBill");
    printf("\n--------------------------------------------------");
    printf("\nItem no.   Quantity   Price per unit   Price");
    printf("\n--------------------------------------------------");
    printf("\n%-7d    %-7d    %-13d    %-4d",item,qty,ppu,price);
    printf("\n%-7d    %-7d    %-13d    %-4d",item1,qty1,ppu1,price1);
    printf("\n%-7d    %-7d    %-13d    %-4d",item2,qty2,ppu2,price2);
    printf("\n--------------------------------------------------");
    int sum = price+price1+price2;
    printf("\nTotal Price %32d",sum);
    int discount = 0.1*sum;
    printf("\nDiscount %35d",discount);
    printf("\nNet Price %34d",sum - discount);
    return 0;
}
