#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;
    //taking the number from user to check
    printf("enter the number you want to check :\n");
    scanf("%d",&n);
    //condition to find even or odd
    if(n%2==0)
        {
            printf("the number %d is even",n);
        }
    else
    {
        printf("the number %d is odd",n);
    }
    return 0;
}
