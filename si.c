#include<stdio.h>
#define ROI 2
int main()

{
    int principle, time, si=0;
    printf("Name- Jatin Garg \n BCA 1 A");
    printf("\nEnter the principle and time");
    scanf("%d %d",&principle,&time);
    si = (principle*ROI*time)/100;
    printf("Simple interest is %d",si);
    return 0;
}
