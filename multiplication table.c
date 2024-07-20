#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Name- Jatin Garg\nBCA 1 A\n");
    printf("Enter the number till the multiplication table require ");
    scanf("%d",&num);
    i=1;
    do
    {
        j=1;
        do
        {
            printf("%3d ",i*j);
            j++;
        }while(j<=10);
        printf("\n");
        i++;
    }while(i<=num);
     return 0;
}
