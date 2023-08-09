#include <stdio.h>
#include <stdlib.h>

int main()
{ char operatorr ;
  float a ,b ,s;
    printf("Enter operator + or - or * or / :  ");
    scanf("%c",&operatorr);
    printf("Enter the two numbers:");
    scanf("%f",&a);
    scanf("%f",&b);

    switch(operatorr)
    {
        case '+' :
           s=a+b;
           printf("%g + %g = %g",a,b,s);
            break;
        case '-' :
            s=a-b;
            printf("%g - %g = %g",a,b,s);
            break;
        case '*' :
            s=a*b;
            printf("%g * %g = %g",a,b,s);
            break;
        case '/' :
            s=a/b;
            printf("%g / %g = %g",a,b,s);
            break;
        default:
            printf("you are out of range");
    }
    return 0;
}
