#include<stdio.h>
int main()
{
float unit,charge;
printf("Name- Jatin Garg \n BCA 1 A\n");
printf("Enter the electricity unit of the house: ");
scanf("%f",&unit);

if(unit<=200)
{
    charge=0.5;

}
else if(unit<=400)
{
charge = 100 + (unit-200)*0.65;
}
else if(unit<=600)
{
charge= 230 + (unit-400)*0.8;
}
 else
{
charge= 390 + (unit-600)*1;
}
printf("\nCharge is %.2f", charge);
return 0;
}
