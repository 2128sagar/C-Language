// Write a programe to print inverted numbered triagnle
// 1
// 22
// 333
// 4444
// 55555
#include <stdio.h>
void main()
{
    int count = 0, flash = 1, temp = 5;

    while (temp > 0)
    {
        while (count < flash)
        {
            printf("%d",flash);
            count++;
        }
        printf("\n");
        count=0;
        flash++;
        temp--;
    }
}