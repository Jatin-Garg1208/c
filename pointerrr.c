#include<stdio.h>
int main()
{
    int num[]={2,11,7,6};
    int target=13,i;
    for(i=0;i<4;i++)
    {
        if(num[i]+num[i+1]==target)
        {
          printf("%d,%d",i,i+1);
        }
        printf("\n");
    }
    return 0;
}
