#include<stdio.h>
int main()
{
    int percentage;
    printf("Name- Jatin Garg\n BCA 1 A");
    printf("\nEnter the percentage");
    scanf("%d",&percentage);
    printf("\nGrade is: ");

    if(percentage>=80)
        printf("Honours ");
    else if(percentage>=60)
        printf("First Division");
    else if(percentage>=50)
        printf("Second Division");
    else if(percentage>=40)
        printf("Third Division");
    else
        printf("Fail");
        return 0;

}
