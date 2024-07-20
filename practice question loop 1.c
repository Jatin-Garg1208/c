#include<stdio.h>


int main ()
{
    int days;
    // 1-monday , 2-tuesday , 3-wednesday, 4-thusday , 5-friday ,6-saturday , 7-sunday
    printf("enter days ");
    // days=4;
    scanf("%d",&days);

    switch (days)
    {
    case 1:
        printf("monday \n");
        break;
    case 2:
        printf("tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("thusday \n");
        break;
    case 5 :
        printf("friday \n");
        break;
    case 6:
        printf("saturday \n");
        break;
    default:
        printf("not a valid day \n");
    }    
    return 0;
}
