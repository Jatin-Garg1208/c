#include<stdio.h>
#include<math.h>
int arm(int num);
int main()
{
    int i;
    printf("\nArmstrong numbers are: ");
    for(i=100;i<=999;i++)
    arm(i);
    return 0;
}
int arm(int num)
 {
    int o_num,a=0,s=0,d=0;
    o_num=num;

    while(num>0)
    {
        s=num%10;
        a+=pow(s,3);
        num=num/10;
        d++;
    }

    if(a==o_num)
    {
        printf("%d ",o_num);
    }

    return 0;
}

