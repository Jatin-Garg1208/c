#include<stdio.h>
int main()
{
    float c,f;
    printf("Name: - Jatin Garg\nBCA 1 A\n");
    printf("Enter the fahrenheit temperature: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("\nCelsius is %.2f",c);
    return 0;
}
