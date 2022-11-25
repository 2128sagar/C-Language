// Write a programe to print half pyramid
// *
// **
// ***
// ****
// *****
#include <stdio.h>
void main()
{
    int count = 0, flash = 1, temp=5;

    while (temp > 0)
    {
        while (count < flash)
        {
            printf("*");
            count++;
       }
        printf("\n");
        count = 0;
        flash++;
        temp--;
    }

// while (count<2)
// {
//     printf("*");
//     count++;
// }
// printf("\n");
// count=0;

// while (count<3)
// {
//     printf("*");
//     count++;
// }
// printf("\n");
// count=0;

// while (count<4)
// {
//     printf("*");
//     count++;
// }
// printf("\n");
// count=0;

// while (count<5)
// {
//     printf("*");
//     count++;
// }
// printf("\n");
// count=0;
}