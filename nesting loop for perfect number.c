#include<stdio.h>
int main()
{
    int start,end,num,a,f;
    f=0;
    printf("Enter the starting and ending numbers :");
    scanf("%d %d",&start,&end);

    for(num=start; num<=end; num++)
    {
        for(a=1; a<num; a++)
       {

            if(num%a==0)
            {
                f+=a;
            }
        }
        if (num==f)
        {
            printf("%d\n ",num);
        }
        f=0;
    }
    return 0;


}
