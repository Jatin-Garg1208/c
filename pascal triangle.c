#include<stdio.h>
#include<math.h>
int main()
{
    int num,a,i,d;
    printf("Pascal Triangle");
    printf("\n\n Enter a number for row: ");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        d=pow(11,i);
        printf("%d \n",d);
    }
    return 0;
}
