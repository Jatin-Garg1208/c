#include<stdio.h>
int main()
{

    int r,c,i,j;
    printf("Enter the number of rows ");
    scanf("%d",&r);
    printf("Enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Base matrix is\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Spiral mode is \n");
   int total_number_of_element=r*c;
   int count=0;
   int minimum_row=0;
   int maximum_row=r-1;
   int minimum_column=0;
   int maximum_column=c-1;
   while(count<total_number_of_element)
   {
       //print row from left to right
       for(j=minimum_column;j<=maximum_column;j++)
       {
           printf("%d ",arr[minimum_row][j]);
           count++;
       }
       minimum_row++;
       if(count>=total_number_of_element)
       {
           break;
       }
       //print column from up to down after row
       for(i=minimum_row;i<=maximum_row;i++)
       {
           printf("%d ",arr[i][maximum_column]);
           count++;
       }
       maximum_column--;
        if(count>=total_number_of_element)
       {
           break;
       }
        //print row from right to left after column
       for(j=maximum_column;j>=minimum_column;j--)
       {
           printf("%d ",arr[maximum_row][j]);
           count++;
       }
       maximum_row--;
        if(count>=total_number_of_element)
       {
           break;
       }
       //print column from down to up after row
       for(i=maximum_row;i>=minimum_row;i--)
       {
           printf("%d ",arr[i][minimum_column]);
           count++;
       }
       minimum_column++;
         if(count>=total_number_of_element)
       {
           break;
       }


   }
   return 0;
}





