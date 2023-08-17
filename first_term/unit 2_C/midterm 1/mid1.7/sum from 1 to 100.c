#include <stdio.h>
#include <stdlib.h>
int sum (int n);
int main()
{
    int n;
    printf("sum of numbers 1 to 100 \n");
    n=100;
    sum(n);
    printf("%d",sum(n));
    return 0;
}
int sum (int n)
{
    if(n!=0)
    {
    return n+sum(n-1);
    }
    else
        return n;

}
