#include<stdio.h>
#include<math.h>
int main()

{
    int num,i,n;
    printf("Enter any number for count the digit in it ");
    scanf("%d",&num);
    for(i=1;; i++)
    {
        n=pow(10,i);
        if (num<n)
        {
            printf("It is a %d digit number",i);
            break;
        }
    }
    return 0;
}
