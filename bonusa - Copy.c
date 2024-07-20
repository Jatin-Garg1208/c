#include<stdio.h>
int main()

{
    int salary[10],bonus[10];
    char name[10][20];
    int i,n;

    printf("Number of employee's in company: ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
 {
    printf("\nEnter the name of employee's: ");
    scanf("%s",name[i]);

    printf("\nSalary of %s is: ",name[i]);
    scanf("%d",&salary[i]);

    bonus[i]= salary[i]*0.7;
 }
 printf("\n-----------------------------------");
 printf("\n         BRC TRADERS");
 printf("\n-----------------------------------");
 printf("\n S.No.  Employee_name  Salary  Bonus");

for (i=0;i<n;i++)
{
    printf("\n%5d  %-13s  %6d  %-5d",i+1,name[i],salary[i],bonus[i]);
}
printf("\n-----------------------------------");
return 0;
}
