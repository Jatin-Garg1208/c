#include<stdio.h>
int main()

{
    int choice,num1,num2;
    printf("Name- Jatin Garg\n BCA 1 A\n");
    printf("Enter any two number for applying  the operators: ");
    scanf("%d  %d",&num1,&num2);
    printf("Enter the choice of operator\n\n");
    printf("***********************************************************\n");
    printf("1) +\n2) -\n3) * \n4) / \n\n");
    printf("***********************************************************\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("***********************************************************\n");
        printf("Processing a '+' operator\n");
        printf("Sum is %d\n",num1+num2);
        printf("***********************************************************\n");
        break;
    case 2:
        printf("***********************************************************\n");
        printf("Processing a '-' operator\n");
        printf("Difference is %d\n",num1-num2);
        printf("***********************************************************\n");
        break;
    case 3:
        printf("***********************************************************\n");
        printf("Processing a '*' operator\n");
        printf("Product is %d\n",num1*num2);
        printf("***********************************************************\n");
        break;
    case 4:
        printf("***********************************************************\n");
        printf("Processing a '/' operator\n");
        printf("Quotient is  is %d\n",num1/num2);
        printf("***********************************************************\n");
        break;

    default:
        printf("Invalid choice enter");
    }

        return 0;

    }
