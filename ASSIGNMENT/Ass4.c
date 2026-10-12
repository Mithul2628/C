#include<stdio.h>
int main()
{
    char a ;
    char Upper;
    char Lower;
    printf("Enter the value : ");
    scanf(" %c",&a);

    if(a >= 65 && a <= 90)
    {
        Lower = a + 32;
        printf("The Character is Converted from %c to %c",a,Lower);
    }
    else if(a >= 97 && a <= 122)
    {
        Upper = a - 32;
        printf("The Character is Converted from %c to %c",a,Upper);
    }
    else
    printf("IT'S NOT A ALPHABET CHARACTER");
}