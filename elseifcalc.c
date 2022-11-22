/*write a prorame to make calculator given option as below
->addition
->subtraction
->multiplication
->division
->modulas
->minimum
->maximum
->equality */

#include<stdio.h>
void main()
{
    int num1, num2, option;
    float answer;

    printf("Enter Value of Number-1 is : ");
    scanf("%d",&num1);
    printf("\nEnter Value of Number-2 is : ");
    scanf("%d",&num2);

    printf("\n____SELECT_______");
    printf("\nNUMBER - 1 FOR ADDITION ");
    printf("\nNUMBER - 2 FOR SUBSTRACTION ");
    printf("\nNUMBER - 3 FOR MULTIPLICATION ");
    printf("\nNUMBER - 4 FOR DIVISION ");
    printf("\nNUMBER - 5 FOR MINIMUM ");
    printf("\nNUMBER - 6 FOR MAXIMUM ");
    printf("\nNUMBER - 7 FOR MODULUS ");
    printf("\nNUMBER - 8 FOR EQUALITY ");
    printf("\nSELECT ANY ONE FROM ABOVE \n");
    scanf("%d",&option);

    if(option == 1)
    {
        answer=num1+num2;
        printf("Your answer is : %f ",answer);
    }
    else if(option == 2)
    {
        answer = num1 - num2;
        printf("Your answer is : %f",answer);
    }
    else if(option == 3)
    {
        answer = num1 * num2;
        printf("Your answer is : %f",answer);
    }
    else if(option == 4)
    {
        answer = num1 / num2;
        printf("Your answer is : %f",answer);
    }
    else if(option == 5)
    {
        answer = num1 < num2;
        printf("Number 1 is Smaller : %f",answer);
    }
    else
    {
        answer = num2 < num1;
        printf("Number 2 is Smaller : %f",answer);
    }
    else if(option == 6)
    {
        answer = num1 > num2;
        printf("Number 1 is Greater: %f",answer);
    }
    else
    {
        printf("Number 2 is Greater: %f",answer);
    }
    else if (option == 7)
    {
        answer = num1 % num2;
        printf("Your answer is : %f",answer);
    }
    else if(option == 8)
    {
        answer = num1 == num2;
        printf("Both are Same : %f",answer);
    }
    else
    {
        printf("_______________");
    }
}