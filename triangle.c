//  write a programe to findout which triagnle is greater accpet height and base from user
#include<stdio.h>
void main()
{
    float height1, base1, height2, base2, area1, area2;

    printf("Enter Height Triangle 1 : ");
    scanf("%f",&height1);
    
    printf("\nEnter Triangle base 1 : ");
    scanf("%f",&base1);
    
    printf("\nEnter Triangle Height 2 : ");
    scanf("%f",&height2);
        
    printf("\nEnter Triangle base 2: ");
    scanf("%f",&base2);

    area1 = height1 * base1 / 2;
    area2 = height2 * base2 / 2;

    if(area1 > area2)
    {
        printf("\nTriangle 1 is greater : %f",area1);
    }
    else
    {
        printf("\nTriangle 2 is greater : %f",area2);

    }
    printf("\n\nGOOD BYE.............");
}