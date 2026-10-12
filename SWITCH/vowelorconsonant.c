#include<stdio.h>
int main()
{

    printf("1.VOWEL OR CONSONANT\n2.UPPER CASE OR LOWER CASE\n3.DIGIT OR CHARACTER\n");
    char ch;
    int op,i;
    printf("Enter the Option : ");
    scanf("%d",&op);

    switch(op)
    {
        case 1:      
                     printf("Enter the Character : ");
                     scanf(" %c",&ch);

                     if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                     {
                        printf(" %c : IT'S A VOWEL ",ch);

                     }

                     else
                     printf("%c : IT'S A CONSONANT ",ch);

                     break;

        case 2:    
                     printf("Enter the Character : ");
                     scanf(" %c",&ch);
  
                     if (ch >=65 && ch <=90)
                     {
                        printf("UPPER CASE ");
                     }
                     else
                     printf("LOWER CASE ");

                     break;

        case 3:
                     printf(" Enter the Character :");
                     scanf(" %c",&ch);
                     
                     if(ch >= '0' && ch <= '9')
                     {
                        printf("%c IS A DIGIT ",ch);
                     }
                     else
                     printf("%c IS A CHARACTER ",ch);

                     break;


    }
}