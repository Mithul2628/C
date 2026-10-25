#include <stdio.h>

int main()
{
    int num, temp, comp, i = 7;

    printf("Enter the Number: ");
    scanf("%d", &num);

    temp = num;
    num = (~num) & 255;
    num = num + 1;

    printf("COMPLEMENT OF %d IS %d\n", temp, num);

    comp = num;

     printf("BINARY OF %d IS ", comp);

    while (i >= 0)
    {
        printf("%d", (comp >> i) & 1);
        i--;
    }

    printf("\n");
    
    printf("DECIMAL OF %d IS %d\n", comp, comp);
    printf("HEXADECIMAL OF %d IS %X\n", comp, comp);
    printf("OCTAL OF %d IS %o\n", comp, comp);

    return 0;
}