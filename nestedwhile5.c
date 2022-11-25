// Write a programe to print inverted numbered triagnle
// 11111
// 2222
// 333
// 44
// 5
#include <stdio.h>
void main()
{
    int count = 0,flash=5,temp=1;
    while(flash>0)
    {
        while (count < flash)
        {
            printf("%d ",temp);
            count++;
        }
        printf("\n");
        count = 0;
        flash--;
        temp++;
    }
}