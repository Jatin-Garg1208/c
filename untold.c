#include<stdio.h>
#include <stdlib.h>
int main()

{
    int marks[10],mark[10];
    int n,i,j,temp;
    float mean=0,median=0,sum=0;
    char name;

    printf("\nEnter the name of the student: ");
    scanf("%s",name);
    printf("\nEnter the number of Subjects: ");
    scanf("%d",&n);
    printf("\nEnter the marks of past years: ");

    for(i=0;i<n;i++)
    {
        scanf("%d",marks[i]);
        sum+=marks[i];
        mean=sum/(i+1);
    }
    for ( i = 0; i < n - 1; i++)
        {
        for ( j = 0; j < n - i - 1; j++)
         {
            if (marks[j] > marks[j + 1])
            {
                temp = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = temp;
            }
        }
    }
      if (n % 2 == 0)
    {
        (mark(n / 2 - 1) + mark(n / 2) / 2.0);
    }
    else
    {
        mark(n / 2.0);
    }

        printf("Mean: %.2f, Median: %.2f\n", mean, median);

        if (mean >= median)
        {
            printf("Student is qualified.\n");
        }
        else
        {
            printf("Student is not qualified.\n");
        }

    return 0;
    }


