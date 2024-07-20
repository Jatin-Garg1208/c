#include<stdio.h>
struct book
{
    int page;
    int lesson;
    char book_name[20];
    char book_type[10];
};
int main()
{
    printf("Name-Jatin Garg\nBCA 1 A\n");
    struct book book1,book2;
    printf("Enter page number and lesson number in book 1: ");
    scanf("%d %d",&book1.page,&book1.lesson);
    printf("\nEnter book name book 1: ");
    scanf("%s",book1.book_name);
    printf("\nEnter book type of book 1: ");
    scanf("%s",book1.book_type);

    printf("\nEnter page number and lesson number in book 2: ");
    scanf("%d %d",&book2.page,&book2.lesson);
    printf("\nEnter book name book 2: ");
    scanf("%s",book2.book_name);
    printf("\nEnter book type of book 2: ");
    scanf("%s",book2.book_type);

    printf("Record of book 1 \nPage no. %d\nLesson no. %d\nBook name %s\nBook type %s\n",book1.page,book1.lesson,book1.book_name,book1.book_type);
    printf("Record of book 2 \nPage no. %d\nLesson no. %d\nBook name %s\nBook type %s",book2.page,book2.lesson,book2.book_name,book2.book_type);
    return 0;
}
