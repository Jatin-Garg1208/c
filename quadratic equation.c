#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y;
    printf("Name- Jatin Garg \nBCA 1 A\n");
    printf("***********************************************************\n");

    printf("Enter the value of quadratic equation \n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);

    d= (pow(b,2)-(4*a*c));
    if (d<0)
    {
        printf("***********************************************************\n");

        printf("The given value has no roots");
        printf("\n***********************************************************\n");

    }
    else if(d>0)

    {
        printf("***********************************************************\n");

        x = (-b+sqrt(d))/(2*a);
        y= (-b-sqrt(d))/(2*a);
        printf("The roots of quadratic equation is %.1f , %.1f",x,y);
        printf("\n***********************************************************\n");

    }
    else
    {
        printf("***********************************************************\n");

        x = (-b+sqrt(d))/(2*a);
        y= (-b-sqrt(d))/(2*a);
        printf("Given value has equal roots that is %.2f, %.2f",x,y);
        printf("\n***********************************************************\n");


    }
    return 0;
}
