
#include<stdio.h>
int main()

{
    char a;
    printf("Enter the Alphabet :");
    scanf("%s",&a);
    switch(a)
    {
        case 'A':
        case 'a':
        printf("\nIt is a vowel");
        break;
        case 'E':
        case 'e':
        printf("\nIt is a vowel");
        break;
        case 'I':
        case 'i':
        printf("\nIt is a vowel");
        break;
        case 'O':
        case 'o':
        printf("\nIt is a vowel");
        break;
        case 'U':
        case 'u':
        printf("\nIt is a vowel");
        break;
        default:
        printf("\nIt is a constant");
    }
    return 0;
}
