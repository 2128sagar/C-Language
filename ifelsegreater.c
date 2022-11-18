// write a programe to findout which number is greater out of given three number
#include <stdio.h>
void main()
{
    int num1, num2, num3;

    printf("\nEnter Value of Number_1 : ");
    scanf("%d", &num1);
    printf("\nEnter Value of Number_2 : ");
    scanf("%d", &num2);
    printf("\nEnter Value of Number_3 : ");
    scanf("%d", &num3);

    if(num1 > num2 && num1 > num3)
    {
        printf("Your Number_1 is Greater");
    }
    else if(num2 > num1 && num2 > num3)
    {
        printf("Your Number_2 is Greater");
    }
    else if(num3 > num1 && num3 > num2)
    {
        printf("Your Number_3 is Greater");
    }
    else
    {
        printf("\nEnter Correct value");
    }
        printf("\n___________________________");
}