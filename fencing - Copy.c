#include<stdio.h>
int main()
{
int l,b,perimeter,fence,c;
printf("Enter the length and breadth of the field :");
scanf("%d%d",&l,&b);
perimeter = 2*(l+b);
printf("perimeter of the field is %d\n\n",perimeter);

printf("Enter type of Fence \n 1,Type 1\n 2, Type 2 \n 3,other\n\n" );
printf("Enter the choice\n\n");
scanf("%d",&c);


if(c==1)
{
printf("The amount of fencing is %d\n\n",10*perimeter);
}
if(c==2)
{
printf("The amount of fencing is %d\n\n",15*perimeter);
}
if(c==3)
{
printf("The amount of fencing is %d\n\n",12*perimeter);
}

return 0;
}
