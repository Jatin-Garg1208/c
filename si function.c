 #include<stdio.h>
 #define ROI 2

int si(int p, int t);
 int main()
 {
     int principal,time;
     printf("Name- Jatin Garg\nBCA 1 A\n");
     printf("Enter the principal amount and time: - ");
     scanf("%d %d",&principal,&time);
     printf("Simple interest is %d\n",si(principal,time));
     printf("Total amount is %d\n",principal+si(principal,time));
     return 0;
 }

 int si(int p, int t)
 {
     return (p*ROI*t)/100;
 }
