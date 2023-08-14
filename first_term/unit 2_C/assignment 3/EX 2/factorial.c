#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter a positive integer : ");
    scanf("%d",&n);
    printf("factorial of %d is = %d ",n,factorial(n));
    return 0;
}
int factorial(int n)

{
  if(n!=1)
    return factorial(n-1)*n;
}
