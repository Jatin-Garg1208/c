#include<stdio.h>
int main()
{
    int i,p,q;
    char abt;
    printf("Enter any ten Alphabets: ");
    p=0;
    q=0;
    for(i=1; i<=10 ; i++ )
    {
        printf("\nEnter Alphabet %d: ",i);
        scanf(" %c",&abt);
        if (abt>=65&&abt<=90)
        {
            p++;
        }

        else if (abt>=97&&abt<=122)
        {
            q++;
        }
        else
        {
            printf ("not a alphabet");
        }


    }
    printf("\nNumber of uppercase element is %d",p);
    printf("\nNumber of lowercase element is %d",q);


    return 0;
}


