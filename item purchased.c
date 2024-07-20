#include <stdio.h>

int main() {
  int cost, quantity, amount, discount, netamount;
  printf("Enter the cost and quantity of the product purchased:\n");
  scanf("%d%d", &cost, &quantity);
  amount = cost * quantity;
  printf("The amount of purchased product is %d\n", amount);
  printf("Enter the discount on the product:\n");
  scanf(" %d", &discount);
  netamount = amount -((amount*discount)/100);
  printf("\nTotal net amount of the purchased product is %d\n", netamount);
  return 0;
}
