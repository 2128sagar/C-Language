// Write a programe to find sqaure of user given number only if it is a positive number 
#include<stdio.h>
void main()
{
    int num, answer;

    printf("Enter Value of Number :- ");
    scanf("%d", &num);

    if(num > 0)
    {
        answer = num * num;

        printf("\nYour answer is : %d\n",answer);
    }

    printf("\nGb");
}