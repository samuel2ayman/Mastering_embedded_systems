#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, n , sum=0;
    printf("Enter the integer:  ");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum = %d ", sum);
}
