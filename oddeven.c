// write a program to findout whether given number is odd or even
#include<stdio.h>
void main()
{
    int number;

    printf("\n........................");

    printf("\nEnter Value of Number : ");
    scanf("%d",&number);


    if(number % 2 == 0)
    {
        printf("\nThis Number is a Even");
    }
    else
    {
        printf("\nThis Number is ODD");
    }
        printf("\n........................");
}