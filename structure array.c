#include<stdio.h>
struct employee
{
    int empid;
    int salary;
    char emp_name[20];

};
int main()
{
    int employee_number,i;
    printf("Name-Jatin Garg\nBCA 1 A\n");
    printf("Enter the number of employee: ");
    scanf("%d",&employee_number);
    struct employee employe[employee_number];
    for(i=0;i<employee_number;i++)
    {
    printf("Enter the employee id: ");
    scanf("%d",&employe[i].empid);
    printf("\nEnter the employee salary: ");
    scanf("%d",&employe[i].salary);
    printf("\nEnter employee name: ");
    scanf("%s",employe[i].emp_name);
    }

    printf("\nEmployee Records:\n");
    for (int i = 0; i < employee_number; i++) {
        printf("\nDetails of employee %d:\n", i + 1);
        printf("Name: %s\n", employe[i].emp_name);
        printf("Employee ID: %d\n", employe[i].empid);
        printf("Salary: %d\n", employe[i].salary);
    }
    return 0;
}

