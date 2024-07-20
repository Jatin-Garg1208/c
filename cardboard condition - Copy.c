#include<stdio.h>
void main()

{
int l,b;
printf("Check that cardboard is rectangle or square\n");
printf("\nEnter the length of the cardboard");
scanf("%d",&l);
printf("\nEnter the breadth of the cardboard");
scanf("%d",&b);
(l!=b)? printf("\nCardboard is rectangle\n"): printf("\nCardboard is square\n");
}
