#include<stdio.h>
#include<math.h>
int main()
{
int n,i,sum=0;
printf("Enter the number till you want sum");
scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   sum+=pow(i,2);
 }
   printf("Sum is %d",sum);
   return 0;
}
