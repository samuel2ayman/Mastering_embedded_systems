#include <stdio.h>
#include <stdlib.h>
typedef struct complex
{
float x;
float y;
} complex;
complex add(complex n1,complex n2);
int main()
{
    complex n1,n2,temp;
    printf("for the 1st complex number \n");
    printf("Enter the real part  : ");
    scanf("%f",&n1.x);
    printf("Enter the imaginary part  : ");
    scanf("%f",&n1.y);
    printf("for the 2nd complex number \n");
    printf("Enter the real part  : ");
    scanf("%f",&n2.x);
    printf("Enter the imaginary part  : ");
    scanf("%f",&n2.y);
    temp=add(n1,n2);
    printf("sum =%0.1f + %0.1fj ",temp.x,temp.y);

    return 0;
}
complex add(complex n1,complex n2)
{
    complex temp;
    temp.x =n1.x+n2.x;
    temp.y =n1.y+n2.y;
    return temp;
}
