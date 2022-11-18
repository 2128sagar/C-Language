// write a program to accept age from user in years. display message "you are eligible for voting" if age is above or equal to 18
#include<stdio.h>
void main()
{
    int age;

    printf("Enter Your age Eligibility for voting :");
    scanf("%d",&age);

    if(age >= 18)
    {
        printf("\nYou are a Eligible for Voting");
    }
    else
    {
        printf("\nYou are Not Eligible for Voting\n");

    }
        printf("\n\nTry after you Eligible hahahaha");
}