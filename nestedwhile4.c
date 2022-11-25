// Write a programe to print inverted numbered triagnle
// 12345
// 1234
// 123
// 12
// 1
#include <stdio.h>
void main()
{
    int count = 0, flash = 5;
    while (flash > 0)
    {
        while (count < flash)
        {
            printf("%d ", count+1);
            count++;
        }
        printf("\n");
        count = 0;
        flash--;
    }
}