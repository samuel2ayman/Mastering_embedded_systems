#include <stdio.h>
#include <stdlib.h>

int main()
{   float n;
    printf("enter the number to check\n");
    scanf("%f",&n);
    if(n>0)
    {
        printf("%.2f is positive",n);
    }
    else if(n<0)
    {
        printf("%.2f is negative",n);
    }
    else
        {
            printf("%.2f is Zero",n);
        }
    return 0;
}
