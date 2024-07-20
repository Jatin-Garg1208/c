#include<stdio.h>

struct data
{
    int value;
};
struct data update(struct data new_data);
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    struct data old;
    scanf("%d",&old.value);
    printf("Old value is %d\n",old.value);
    old=update(old);
    printf("Update value is %d\n",old.value);
    return 0;
}

struct data update(struct data new_data)
{
    int n_value;
    scanf("%d",&n_value);
    new_data.value=n_value;
    return new_data;
}
