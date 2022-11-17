// wap to find volume of cone
#include<stdio.h>
void main()
{
    float radius, height, value;

    printf("Enter Radious value : ");
    scanf("%f",&radius);

    printf("Enter Height value : ");
    scanf("%f",&height);

    value = 3.14 * radius * radius * height * 1/3;

    printf("Value is : %0.3f",value);

}