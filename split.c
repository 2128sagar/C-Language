// wap to split 2 digit number 
#include<stdio.h>
void main()
{
    int num1, num2, number;

    printf("Enter value of Number-1 :");
    scanf("%d",&number);

    num1 = number / 10;
    num2 = number % 10;

    printf("First value is :- %d Second value is :- %d",num1, num2);
}