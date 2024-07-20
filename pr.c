#include<stdio.h>
#include<math.h>
int main()
{
    int marks[10],i;
    for (i=0;i<=9;i++)

 {
    printf("Enter the marks of %d student :",i+1);
    scanf("%d",&marks[i]);

 }
  for (i=0;i<=9;i++)
  {
       if(marks[i]<35)
        printf("\n%d\n",i);
  }
return 0;
}
