#include<stdio.h>
int main()
{
    int P;
    printf("Enter the Amount =");
    scanf("%d", &P);

    int R;
    printf("Enter the Intrest  =");
    scanf("%d", &R);

    int T;
    printf("Enter the Time (YEARS) =");
    scanf("%d", &T);

    int Simpleinterest;

    Simpleinterest = (P*R*T)/100;

    printf("Simple interest of : %d\n",Simpleinterest);

    int TotalAmount;

    TotalAmount = P + Simpleinterest;

    printf("Total amount = %d",TotalAmount);
    return 0;
}