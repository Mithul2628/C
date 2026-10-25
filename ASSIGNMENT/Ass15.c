
#include <stdio.h>

int main()
{
    int min, max, rev, rem, num;

    printf("Enter the min: ");
    scanf("%d", &min);

    printf("Enter the max: ");
    scanf("%d", &max);

    while (min <= max)
    {
        num = min;
        rev = 0;

        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        if (rev == min && rev >=10)
        {
            printf("%d ", min);
        }

        min++;
    }

    return 0;
}
