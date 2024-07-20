#include<stdio.h>
int main()
{

    int n,i,j;
    printf("Enter the number of row and column ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Base matrix is\n");
   int total_number_of_element=n*n;
   int count=0;
   int minimum_row=0;
   int maximum_row=n-1;
   int minimum_column=0;
   int maximum_column=n-1;
   while(count<total_number_of_element)
   {
       //print row from left to right
       for(j=minimum_column;j<=maximum_column;j++)
       {
           scanf("%d",&arr[minimum_row][j]);
           count++;
       }
       minimum_row++;
       if(count>total_number_of_element)
       {
           break;
       }
       //print column from up to down after row
       for(i=minimum_row;i<=maximum_row;i++)
       {
           scanf("%d",&arr[i][maximum_column]);
           count++;
       }
       maximum_column--;
        if(count>total_number_of_element)
       {
           break;
       }
        //print row from right to left after column
       for(j=maximum_column;j>=minimum_column;j--)
       {
           scanf("%d",&arr[maximum_row][j]);
           count++;
       }
       maximum_row--;
        if(count>total_number_of_element)
       {
           break;
       }
       //print column from down to up after row
       for(i=maximum_row;i>=minimum_row;i--)
       {
           scanf("%d",&arr[i][minimum_column]);
           count++;
       }
       minimum_column++;
         if(count>total_number_of_element)
       {
           break;
       }


   }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",arr[i][j]);
            printf("\n");

    }
   return 0;
}






