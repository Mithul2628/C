#include<stdio.h>
int main()
{
    char Lower,Upper;
    printf("Convert from [UP to LOW] or [LOW to UP] \n");
    printf("1. Input only in UPPER CASE\n2. Input only in LOWER CASE\n ");
    int op;
    printf("Enter the Option : ");
    scanf("%d",&op);

    char ch;
    printf("Enter the Character : ");
    scanf(" %c",&ch);
   
    switch (op)
{
    case 1 :     Lower = ch + 32;
            if (Lower >= 97 && Lower <= 122)

                printf("%c is converted into %c ",ch,Lower); 
            else 
                printf("Enter only Upper "); 
    break;

    case 2 :     Upper = ch - 32;
            if (Upper >= 65 && Upper <= 90)

                printf("%c is converted into %c ",ch,Upper);
            else
                printf("Enter only Lower ");   
    break;
  
}

}