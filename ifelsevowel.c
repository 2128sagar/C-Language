// Write a programe to findout whether the given alphabet is vowel or not without using else if
#include<stdio.h>
void main()
{
    char alphabet;

    printf("____________________________\n");

    printf("Enter Your Alphabet : ");
    scanf("%c",&alphabet);

    if(alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
    {
        printf("\nThis Letter is Vowel");
    }
    else
    {
        printf("\nThis Letter is Consonent");
    }
        printf("\n_________________________");
}