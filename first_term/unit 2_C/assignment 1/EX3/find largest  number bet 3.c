#include <stdio.h>
#include <stdlib.h>

int main()
{   float a,b,c;
//taking three numbers from user
    printf(" enter the three numbers\n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);

    //comparing between the three numbers to find the largest

    if(a>b)
    {
        if(a>c)
            {
        printf("max number is %.2f",a);
            }
            else
            {
        printf("max number is %.2f",c);

            }
    }
    else
    {
        if(b>c)
        {
            printf("max number is %.2f",b);
        }
        else
            {
             printf("max number is %.2f",c);
            }
    }
    return 0;
}
