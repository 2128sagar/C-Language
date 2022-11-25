// Write a programe to find power and exponent
#include <stdio.h>
void main()
{
    int base, power, exponent, count;

    printf("Enter value is Base : ");
    scanf("%d", &base);
    printf("Enter Value of Power : ");
    scanf("%d", &power);

    exponent = base * base;
    count = 2;
    // exponent = exponent * base;
    // exponent = exponent * base;
    // exponent = exponent * base;

    while (count < power)
        if (power > 1)
        {
            exponent = exponent * base;
            count++;
            exponent = base * base;
            count = 2;

            while (count < power)
            {
                exponent = exponent * base;
                count = count + 1;
            }
            printf("\nExponent is : %d", exponent);
        }
        else if (power == 1)
        {
            printf("%d", base);
        }
        else
        {
            printf("invalid choice");
        }
    printf("%d", exponent);
}