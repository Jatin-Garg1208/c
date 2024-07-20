#include<stdio.h>
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    int n, i;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int arr[n],*p[n];
    for(i=0;i<n;i++)
    {
        p[i]=&arr[i]; // Enter address of array to pointer
    }
    printf("Enter the elements in pointer");
    for (i=0; i<n; i++)
    {
      scanf("%d",p[i]);
    }
    printf("Print the elements of pointer\n");
    for (i=0; i<n; i++)
    {
      printf("%d\n",*p[i]);
    }
    return 0;
}
