// wapto findout which number is greater outof given 3 number without using and and or
#include<stdio.h>
void main()
{
    int num1, num2, num3;

    printf("\nENTER VALUE OF NUMBER-1 : ");
    scanf("%d",&num1);
    printf("\nENTER VALUE OF NUMBER-2 : ");
    scanf("%d",&num2);
    printf("\nENTER VALUE OF NUMBER-3 : ");
    scanf("%d",&num3);

    if(num1==num2)
    {
        if(num2==num3)
        {
            printf("All are Equal");
        }
        else
        {

            if(num1>num2)
            {
                if(num1>num3)
                {
                    printf("Your Greater Number is 1");
                }
                else
                {
                    printf("Your Greater Number is 3");
                }
            }
            else
            {
                if(num2>num3)
                {
                    printf("Your Greater Number is 2");
                }
                else
                {
                    printf("Your Greater Number is 3");
                }
            }
        }
    }       
}   