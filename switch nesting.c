#include<stdio.h>
int main()

{
    float length,breadth,height,radius;
    char ch1,ch2;
    printf("Enter the choice\n\n");
    printf("***********************************************************\n");
    printf("1) Circle\n2) Rectangle\n3) Cuboid \n\n ");
    printf("***********************************************************\n");
    scanf("%c",&ch1);
    switch(ch1)
    {
    case '1':
        printf("***********************************************************\n");
        printf("Processing a circle\n");
        printf("Enter the choice \n\nA) Circumference \nB) Area \n");
        printf("***********************************************************\n");
        scanf(" %c",&ch2);
        switch(ch2)
        {
        case 'A':
            printf("Enter the radius\n");
            scanf("%f",&radius);
            printf("Circumference of the circle is %.2f \n",2*3.14*radius);
            break;
        case 'B':
            scanf("%f",&radius);
            printf("Area of the circle is %.2f\n",3.14*radius*radius);
            break;
        default:
            printf("Invalid choice enter");
        }
        break;
    case '2':
        printf("***********************************************************\n");
        printf("Processing a rectangle\n");
        printf("Enter the choice \n\n A) Perimeter\nB) Area \n");
        printf("***********************************************************\n");
        scanf(" %c",&ch2);
        printf("Enter the length and breadth\n");

        switch(ch2)
        {
        case 'A':
            scanf("%f  %f",&length,&breadth);
            printf("Perimeter of the rectangle is %.2f \n",2*(length+breadth));
            break;
        case 'B':
            scanf("%f  %f",&length,&breadth);
            printf("Area of the rectangle is %.2f\n",length*breadth);
            break;
        default:
            printf("Invalid choice enter");
        }
        break;
    case '3':
        printf("***********************************************************\n");
        printf("Processing a cuboid\n");
        printf("Enter the choice \n\n  A) Curved Surface Area \n B) Total Surface Area \n C) Volume \n");
        printf("***********************************************************\n");
        scanf(" %c",&ch2);
        printf("Enter the length ,breadth ,height\n");

        switch(ch2)
        {
        case 'A':
            scanf("%f  %f  %f",&length,&breadth,& height);
            printf("Curved Surface Area of the Cuboid is %.2f \n",2*height*(length+breadth));
            break;
        case 'B':
            scanf("%f  %f  %f",&length,&breadth,&height);
            printf("Total Surface Area of the Cuboid is %.2f\n",2*((length*breadth)+(breadth*height)+(height*length)));
            break;
        case 'C':
            scanf("%f  %f  %f",&length,&breadth,&height);
            printf("Volume of the Cuboid is %.2f\n",length*breadth*height);
            break;

        default:
            printf("Invalid choice enter");
        }
        break;
    default:
        printf("Invalid choice enter");
    }
    return 0;
}
