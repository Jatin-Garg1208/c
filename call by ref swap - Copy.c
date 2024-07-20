#include<stdio.h>


void swap(int *a, int *b);
int main()
{
    int n1,n2;
    printf("Name- Jatin Garg\nBCA 1 A\n");
    printf("Enter two numbers: - ");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping number \nn1 is %d \nn2 is %d",n1,n2);
    swap(&n1,&n2);
    printf("\nAfter swapping number \nn1 is %d \nn2 is %d",n1,n2);

    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
    return;
}

