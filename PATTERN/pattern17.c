#include<stdio.h>
#include<unistd.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=35;j++)
        { 
            
            //LETTER 'M'
            
            if(j==0||j==4||(i==1)&&(j==1)||(i==2)&&(j==2)||(i==1)&&(j==3))
            {
                printf(" *");
            }

            else if(j==5)
            {
                printf("  ");
            }

            //LETTER 'I'

            else if((j>=6 && j<=10)&&(i==0||i==4||j==8))
            {
                printf(" *");

            }

            //LETTER 'T'

            else if(j==11)
            {
                printf("  ");
            }

            else if((j>=12 && j<=16)&&(i==0||j==14))
            {
                printf(" *");
            }

            //LETTER'H'

            else if(j==17)
            {
                printf("  ");
            }

            else if((j>=18 && j<=22)&&(i==2||j==18||j==22))
            {
                printf(" *");
            }

            //LETTER 'U'

            else if(j==23)
            {
                printf("  ");
            }

            else if((j>=24 && j<=28) && (i==4||j==24||j==28))
            {
                printf(" *");
            }

            //LETTER 'L'

            else if(j==29)
            {
                printf("  ");
            }

            else if((j>=30 && j<=34) && (i==4||j==30))
            {
                printf(" *");
            }
            else
            printf("  ");
        }
        printf("\n");
        usleep(500000);
        }
      
    }
