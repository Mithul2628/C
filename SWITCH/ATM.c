#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
int main()
{
    int op,pin2,d,w;
    int pin =2628;
    long long int No2;
    int Balance = 50000;
    long long int No = 9500000276LL;
    long long int AC = 2628022005LL;
    long long int AC2;
   

    printf(" WELCOME TO ATM\n ");
    printf("\n");
    printf("1.Balance Amount\n2.Withdrawl Amount\n3.Deposite Amount \n");
     printf("\n");
    printf("Enter the Option : ");
    scanf("%d",&op);
     printf("\n");

    switch(op)
    {
        case 3:       printf(" To Deposite \n");
                      printf("\n");

                printf("Please Enter ur Phone No : ");
                scanf("%lld", &No2);
                 printf("\n");
                
                if(No == No2)

                {
                int otp ,otp1;
                srand(time(0));
                otp = 1000 + rand() % 9000;
                sleep(2);
                printf(" Your OTP is : %d\n",otp);
                 printf("\n");

                printf("plese Enter your OTP : ");
                scanf("%d",&otp1);
                 printf("\n");

                if(otp == otp1)

                {
                    printf(" Please Enter Your ACCOUNT NO : ");
                    scanf("%lld", &AC2);
                     printf("\n");

                    if(AC ==AC2)
                    {
                        printf(" Your ACCOUNT NO is VERIFIED\n ");
                         printf("\n");
                        printf(" Please Enter Your PIN : ");
                        scanf("%d",&pin2);
                         printf("\n");

                        if(pin == pin2)
                        {
                            printf("Your PIN is VERIFIED \n");
                             printf("\n");

                            printf("Enter the Deposite Amount : ");
                            scanf("%d",&d);
                             printf("\n");

                            Balance = Balance + d;
                            printf(" AVAILABLE BALANCE : %d\n",Balance);
                             printf("\n");

                        }
                        else
                        printf("You Enter the Wrong PIN\n ");
                    }
                    else 
                    printf("YOUR ACCOUNT NUMBER IS WRONG \n");

                }
                else
                printf("OTP is INVALID \n");


            }
                else
                printf("YOU ENTER WRONG PHONE NUMBER \n");

                break;
          
        case 1:      printf("BALANCE ENQUIRY \n");
                      printf("\n");

                  printf("Enter your PIN : ");
                  scanf("%d",&pin2);
                   printf("\n");

                  if(pin == pin2)
                  {
                    printf(" YOUR PIN IS VERIFIED \n");
                     printf("\n");
                    
                     printf(" AVAILABLE BALANCE : %d\n",Balance);
                      printf("\n");

                  }           
                  else 
                  printf("YOU ENTER WRONG PIN\n ");

                  break;

        case 2:    printf("WITHDRAWAL AMOUNT \n");
                    printf("\n");

                     printf("Enter your PIN : ");
                     scanf("%d",&pin2);
                     printf("\n");

                  if(pin == pin2)
                  {
                    printf(" YOUR PIN IS VERIFIED \n");
                     printf("\n");
                    
                        printf("Enter Withdrawal Amount : ");
                        scanf("%d",&w);
                         printf("\n");

                        if(w<=Balance)
                        {
                            Balance = Balance - w ;
                            printf("AVAILABLE BALANCE : %d\n",Balance);
                             printf("\n");
                         
                        }
                        else
                        printf("NO MONEY \n");
                    }
                    else
                    printf("YOUR PIN IS WRONG \n");

                    break;

    }
}
