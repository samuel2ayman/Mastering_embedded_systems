#include <stdio.h>
#include <stdlib.h>
int reverse (int n);
int main()
{
    int n;
    printf("Enter number to reverse : ");
    scanf("%d",&n);
    reverse(n);
     ;
    return 0;
}
int reverse (int n)
{   int rev ,reminder ;
    while(n!=0)
    {
       reminder = n%10;
       rev = rev *10 + reminder;
      n= n/10;
    }
    printf("the reversed number : %d ",rev);
   return rev;
}
