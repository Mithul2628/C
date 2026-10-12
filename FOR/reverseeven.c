
#include <stdio.h>

int main()
{
    long long int num, temp, a, rev = 0;

    printf("Enter the NO: ");
    scanf("%lld", &num);

    for(temp = num; temp != 0; temp = temp / 10)
    {
        a = temp % 10;
        rev = rev * 10 + a;
    }

    printf("REVERSE NO: %lld\n", rev);

    for(temp = rev; temp != 0; temp = temp / 10)
    {
        a = temp % 10;

        if(a % 2 == 0)
        {
            printf("%lld", a);
        }
    }

    return 0;
}
