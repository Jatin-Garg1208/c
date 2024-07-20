#include<stdio.h>
int main()
{
    int num,n,p,i,o;
    printf("Enter any ten numbers: ");
    n=0;
    p=0;
    o=0;
    for(i=1; i<=10 ; i++ )
    {
        printf("\nEnter number %d: ",i);
        scanf("%d",&num);
        if (num==0)
            n++;
      if(num<0)
           {
             p++;
           }
       if(num>0)
           {
               o++;
           }


    }
    printf("\nNumber of positive element is %d",n);
    printf("\nNumber of negative element is %d",p);
    printf("\nNumber of zero element is %d",o);
    return 0;
}

