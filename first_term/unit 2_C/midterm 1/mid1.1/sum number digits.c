#include <stdio.h>
#include <stdlib.h>
int sum_digit(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("The sum of %d = %d",n,sum_digit(n));
    return 0;
}
int sum_digit(int n)
{
    int a,b,c,d,e,sum;
    a=n%10;
    b=((n/10)%10);
    c=(n/100)%10;
    d=(n/1000)%10;
    e=(n/10000)%10;
    sum = a+b+c+d+e;
    return sum;

}
