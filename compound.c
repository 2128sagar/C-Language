// wap to compound interest
#include<stdio.h>
#include<math.h>
void main()
{
    float principle, rate, amount, t, ci;
    
    printf("Enter Principle :");
    scanf("%f", &principle);
    
    printf("\nEnter Rate :");
    scanf("%f",&rate);
    
    printf("\nEnter Time :");
    scanf("%f",&t);
    
    amount = principle * pow ((1+rate/100),t);

    printf("\nYour amount is : %f",amount);

    ci = amount - principle;
    
    printf("\nYour Compound Interest is : %f",ci);
}
