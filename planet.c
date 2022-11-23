// Write a programe to findout distance between 2 planets
// https://www.jpl.nasa.gov/edu/pdfs/scaless_reference.pdf
#include <stdio.h>
void main()
{
    int planet1, planet2, answer;
    printf("\nEnter value of planet 1");
    printf("\nEnter 1 for mercury ");
    printf("\nEnter 2 for Venus ");
    printf("\nEnter 3 for Earth ");
    printf("\nEnter 4 for Mars ");
    printf("\nEnter 5 for Jupiter ");
    printf("\nEnter 6 for Saturn ");
    printf("\nEnter 7 for Neptune  ");
    printf("\nEnter 8 for Uranus  ");
    scanf("%d", &planet1);
    printf("\nEnter value of planet 2");
    printf("\nEnter 1 for mercury ");
    printf("\nEnter 2 for Venus ");
    printf("\nEnter 3 for Earth ");
    printf("\nEnter 4 for Mars ");
    printf("\nEnter 5 for Jupiter ");
    printf("\nEnter 6 for Saturn ");
    printf("\nEnter 7 for Neptune  ");
    printf("\nEnter 8 for Uranus  ");
    scanf("%d", &planet2);

    if(planet1==1 && planet2==2)
    {
        answer = 57900000-108200000;
        printf("Planet Distance is : %d ",answer);
    }
    else if(planet1==1 && planet2==3)
    {
        answer = 57900000-149600000;
        printf("Planet Distance is : %d ",answer);
    }
    else if(planet1==1 && planet2==4)
    {
        answer = 108200000-149600000;
        printf("Planet Distance is : %d ",answer);
    }
    else if(planet1==2 && planet2==1)
    {
        answer = 108200000 - 57900000;
        printf("Planet Distance is : %d",answer);
    }
    else if(planet1==2 && planet2==2)
    {
        answer = 108200000 - 108200000;
        printf("Planet Distance is : %d",answer);
    }
}