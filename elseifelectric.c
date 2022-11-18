/*Write a C program to calculate final electricity bill based upon below given criteria.
Take monthly electricity unit from user as input.
units           price per unit.
<100            1
>100 & <200     2
>200 & <300     3
>300 & <400     4
>400            5 */
#include <stdio.h>
void main()
{
    float unit, bill;

    printf("Enter Electrical Units : ");
    scanf("%f",&unit);

    if (unit)
    {
        printf("Your Total Electricity Bill is : ");
    }
  /*  else if(100<200 * 2)
    {
        printf("Your Total Electricity Bill is : ");
    }
    else if(200<300 * 3)
    {
        printf("Your Total Electricity Bill is : ");
    }
    else if(300<400 * 4)
    {
        printf("Your Total Electricity Bill is : ");
    }
    else if(400>400 * 5)
    {
        printf("Your Electricity Bill is : ");
    }*/
    else
    {
        printf("\nBad Value______");
    }
        printf("\n_______________");
}