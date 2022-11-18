// wap to accept month from user. display message "this month has 28 or 29 days" if month if february
#include<stdio.h>
void main()
{
    int month;

    printf("Enter Value of Month : ");
    scanf("%d",&month);

    if(month == 2)
    {
        printf("\nThis Month has 28 or 29 Days\n");
    }
    else
    {
        printf("\nEnter correct month\n");
    }
        printf("\n\nbye");
}