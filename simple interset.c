#include<stdio.h>
#define ROI 2

int si(int,int);
int main()
{
     int p,t;
     printf("Name-Jatin garg\nBCA 1 A\n");
     printf("\nEnter the principle and time ");
     scanf("%d %d",&p,&t);
     printf("Amount=%d\n",si(p,t));
     printf("Total amount=%d",p+si(p,t));
     return 0;
}
int si(int p, int t )
{
    return (p*ROI*t)/100;
}

