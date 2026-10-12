#include<stdio.h>

int main()
{
    int Fah;

    printf("Enter the Fahrenheit =");
    scanf("%d", &Fah);

    int Celcius = (Fah - 32)*5/9;

    printf("Fahrenheit conveted to Celcius is :%d",Celcius);
    return 0;


}