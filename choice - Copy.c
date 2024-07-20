#include<stdio.h>
int main()

{
    int l,b,a,perimeter,num;
    printf("Enter the length and breadth of the recangle");
    scanf("%d  %d",&l,&b);

    printf("\n****************\n");
    printf("press num =1 for perimeter\n\n ");
    printf("press num = 2 for area\n\n");
    printf("Enter the choice\n");
    scanf("%d",&num);
    printf("\n****************\n");


    switch(num)
    {
     case 1:
     perimeter = 2*(l+b);
     printf("The perimeter of the rectangle is %d \n\n",perimeter);
     break;

     case 2:
     a = l*b;
     printf("The area of the rectangle is %d \n \n",a);
     break;

     default:
     printf("Invalid choice selected ");
    }
    return 0;
}
