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
    int unit, price, amount;

    printf("Enter Electrical Units : ");
    scanf("%d",&unit);

    
    if (unit < 100)
    {
        price=1;
    }
    else if(unit >= 100 && unit <200)
    {
        price = 2;
    }
    else if(unit >=200 && unit < 300)
    {
        price = 3;
    }
    else if(unit >=300 && unit <400)
    {
        price = 4;
    }
    else
    {
        price = 5;
    }
        amount = unit*price;
        printf("Your Electricity Bill is : %d",amount);

        printf("\n_______________");
}