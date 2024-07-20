#include<stdio.h>
int function();
int main()
{
    int number;
    printf("Name- Jatin Garg\nBCA 1 A\n");
    printf("USage of static variable\n");
    printf("a is %d",function());
    printf("\na is %d",function());
    return 0;
}
int function()
{
    static int a=4;
    a++;
    return a;
}

