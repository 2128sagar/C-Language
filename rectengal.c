#include<stdio.h>
void main()
{
    int length, width, area;

    printf("Enter value of Length : ");
    scanf("%d",&length);

    printf("\nEnter value of Width : ");
    scanf("%d",&width);

    area = length * width;

    printf("\nRectangle area is :- %d",area);
}