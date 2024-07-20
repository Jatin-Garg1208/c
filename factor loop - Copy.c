#include<stdio.h>
int main()

{
    int num,i;
    printf("Enter the number for factor :");
    scanf("%d",&num);
    printf("factors of the number are :");
    {

        for(i=1;i<=num;i++)
            if(num%i==0)
                printf("%d\n",i);
    }
    return 0;
}
