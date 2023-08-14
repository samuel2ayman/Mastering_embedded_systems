#include <stdio.h>
#include <stdlib.h>

int main()
{   int i, n,sum=1;
    printf("Enter an integer : ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("Error!! factorial of negative number dosen't exist");
    }
    else
    {
        for(i=n;i>0;i--)
        {
            sum=sum*i;
        }
        printf("%d",sum);
    }
    return 0;
}
