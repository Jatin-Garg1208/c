# include<stdio.h>

int main()
{
int salary,t,b;
printf("Enter the salary of employee");
scanf("%d",&salary);
printf("Number of year he has worked for company");
scanf("%d",&t);

if(t>=5)
{
if (salary>=50000)
{
    b= 0.8*salary;
}
else
{
    b= 0.6*salary;
}
}
else
b = 0.5*salary;

printf(" Employee getting bonus from company is %d",b);
return 0;

}
