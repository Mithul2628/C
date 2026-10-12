#include<stdio.h>
int main()
{
    char a;
    printf("Convert from [UP to LOW] or [LOW to UP] \n");
    printf("1.Input in [HIGHER CASE] or [LOWER CASE]\n");
    int op;
    printf("Enter the Option : ");
    scanf("%d",&op);
    char ch;
    printf("Enter the Character : ");
    scanf(" %c",&ch);
   


    switch (op)
{
    case 1 :  a = ch ^ 32;
    printf("%c is converted into %c ",ch,a);
    break;

  
}

}