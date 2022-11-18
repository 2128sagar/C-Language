// write a program to findout smallest triangle from 3 triangle using base and height given by user
#include <stdio.h>
void main()
{
    float height1, height2, height3, base1, base2, base3, triangle1, triangle2, triangle3;
    printf("\nEnter Height of Triangle-1 is : ");
    scanf("%f", &height1);
    printf("\nEnter Base of Triangle-1 is : ");
    scanf("%f", &base1);
    printf("\nEnter Height of Triangle-2 is : ");
    scanf("%f", &height2);
    printf("\nEnter Base of Triangle-2 is : ");
    scanf("%f", &base2);
    printf("\nEnter Height of Triangle-3 is : ");
    scanf("%f", &height3);
    printf("\nEnter Base of Triangle-3 is : ");
    scanf("%f", &base3);

    triangle1 = height1 * base1;
    triangle2 = height2 * base2;
    triangle3 = height3 * base3;

    if(triangle1<triangle2 && triangle1<triangle3)
    {
        printf("\nTriangle-1 is Smaller");
    }
    else if(triangle2<triangle1 && triangle2<triangle3)
    {
        printf("\nTriangle-2 is Smaller");
    }
    else if(triangle3<triangle1 && triangle3<triangle2)
    {
        printf("\nTriangle-3 is Smaller");
    }
    else
    {
        printf("_______________________");
    }
}