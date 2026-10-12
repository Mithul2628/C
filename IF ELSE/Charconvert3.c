#include<stdio.h>
int main()
{
    char  Upper,Lower,ch;
    printf("Enter the Character : ");
    scanf(" %c",&ch);
    
     if (ch >=65 && ch <= 90)
     {
        Lower = ch + 32;
        printf("%c is converted to %c ",ch,Lower);
     }  
     else if (ch >=97 && ch <=122)
     {
        Upper = ch - 32;
        printf("%c is converted into %c ",ch,Upper);
     }
     else
     printf("IT'S NOT A CHARACTER ");
    
            
   
    
        
        
}