#include<stdio.h>
#include<math.h>

int main()
{
    int hypotenuse,base,altitude;
    hypotenuse=0;
    printf("Calculating hypotenuse by pythagoras theorm \n");
    printf("Enter the base of triangle :");
    scanf("%d",&base);
    printf("\nEnter the altitude of triangle :");
    scanf("%d",&altitude);
   hypotenuse = sqrt(pow(base,2) + pow(altitude,2));

    printf("Hypotenuse is %d ",hypotenuse);
    return 0;
}
