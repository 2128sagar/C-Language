// Body Of Mass Index
#include<stdio.h>
void main()
{
    float weight, height_cm, bmi, meter;

    printf("Enter value of weight : ");
    scanf("%f",&weight);

    printf("\nEnter value of Height : ");
    scanf("%f",&height_cm);

    meter = height_cm / 100;
    printf("\nValue of Meter is : %f", meter);

    bmi = weight / (meter * meter);

    printf("Body Mass Index is : %.3f",bmi);

}