#include <stdio.h>
#include <stdlib.h>
float sqr_rt(float n);
int main()
{
    float n;
    printf(" enter positive number to find square root : ");
    scanf("%f",&n);
    sqr_rt(n);

    return 0;
}
float sqr_rt(float n)
{
    float s;
    if (n<=0)
     printf("rejected number enter positive number");
     else
        {
         s=sqrt(n);
        }
     printf("the square root of %0.2f is = %f ",n,s);

}
