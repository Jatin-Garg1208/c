#include<stdio.h>
int main()

{
    int a,b,c,g;
    printf("Name - Jatin Garg\n BCA 1 A\n");
    printf("Enter the two numbers\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b)
    {
        if (a>c)
        {
            g=a;
        }
        else
        {
            g=c;
        }
    }
    else
    {
         if (b>c)
        {
            g=b;
        }
        else
        {
            g=c;
        }
    }
    printf("The greatest number is %d",g);
    return 0;
}
