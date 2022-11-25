// Write a programe to print half numbered triagnle
// 1
// 12
// 123
// 1234
// 12345
#include <stdio.h>
void main()
{
    int count = 0, flash = 1, temp=5;

    while (temp > 0)
    {
        while (count < flash)
        {
            printf("%d",count+1);
            count++;
        }
        printf("\n");
        count = 0;
        flash++;
        temp--;
    }
}