#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n%3==0)
        printf("%d ==> 0",n);
    else
        printf("%d ==> 1",n);
    return 0;
}
