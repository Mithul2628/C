#include<stdio.h>

 int main()
 {
    int Cel;

    printf("Enter the Celcius = ");
    scanf("%d", &Cel);


    int Fahrenheit = (Cel*9/5)+32;
    
    printf("Celcius Converted to Fahrenhit is : %d",Fahrenheit);
    return 0;


 }