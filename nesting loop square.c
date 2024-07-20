#include<stdio.h>
int main()

{
    int a,b,n;

    for (a=1; a<=11; a++)
    {
        for (b=1; b<=11; b++)
           {
             if ( a==1 || a==11 || b == 1 || b==11 )
                printf("* ");
               else if ( a==3 && (b==3 || b == 4 || b==8 || b==9) )
                printf("* ");
                 else if ( a==4 && (b==2 || b == 5 || b==7 || b==10) )
                printf("* ");
                 else if ( a==5 && (b==2 || b == 5 || b==7 || b==10) )
                printf("* ");
                 else if ( a==6 && (b==3 || b == 4 || b==8 || b==9) )
                printf("* ");
                 else if ( a==8 && (b==3 || b==9) )
                printf("* ");
                 else if ( a==9 && (b==5 || b == 4 || b==8 || b==6 || b==7) )
                printf("* ");
             else
                printf("  ");
           }
           printf("\n");
    }
    printf("\n");
    return 0;
}
