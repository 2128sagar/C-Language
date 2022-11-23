// write a programe to find zodiac sign of user
// https://in.pinterest.com/pin/81698180718875314/
#include <stdio.h>
void main()
{
    int date, month;

    printf("\nEnter Your Born Date : ");
    scanf("%d", &date);
    printf("\nEnter Your Born Month : ");
    scanf("%d", &month);

    if (date >= 21 && month == 3 || date <= 19 && month == 4)
    {
        printf("aries");
    }
    else if (date >= 20 && month == 4 || date <= 20 && month == 5)
    {
        printf("taurus");
    }
    else if(date >= 21 && month == 5 || date <= 20 && month == 6)
    {
        printf("gemini");
    }
    else if(date >= 21 && month == 6 || date <= 22 && month == 7)
    {
        printf("cancer");
    }
    else if(date >= 23 && month == 7 || date <= 22 && month == 8)
    {
        printf("leo");
    }
    else if(date >= 23 && month == 8 || date <= 22 && month == 9)
    {
        printf("virgo");
    }
    else if(date >= 23 && month == 9 || date <= 22 && month == 10)
    {
        printf("libra");
    }
    else if(date >= 23 && month == 10 || date <= 21 && month == 11)
    {
        printf("scorpio");
    }
    else if(date >= 22 && month == 11 || date <= 21 && month == 12)
    {
        printf("Sagittarius");
    }
    else if(date >= 22 && month == 12 || date <= 19 && month == 1)
    {
        printf("capricorn");
    }
    else if(date >= 20 && month == 1 || date <= 18 && month == 2)
    {
        printf("aquarius");
    }
    else if(date >= 19 && month == 2 || date <= 20 && month == 3)
    {
        printf("pisces");
    }
    else
    {
        printf("_________");
    }
}