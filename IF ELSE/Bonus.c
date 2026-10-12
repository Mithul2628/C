#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Salary : ");
    scanf("%d",&a);
    int Salary;

    if (a>=50000)
     {
        Salary = a * 10/100;
     Salary = Salary + a;
     printf("Bonus for ur salary : %d",Salary);
     }

    else if(a>=30000)
    {
        Salary = a * 7/100;
        Salary = Salary + a;   

     printf("Bonus for ur salary : %d",Salary);
    }

    else
    {
    Salary = a;
    Salary = a * 5 /100;
    Salary = Salary + a;
    
     printf("Bonus for ur salary : %d",Salary);
    }
}


    

