#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,p,a[10],i;
    printf("Input number");
    scanf("%d",&n);
    printf("bit popsition");
    scanf("%d",&p);
    for(i=1;i<=10;i++)
    {
        if((n%2)==0)
        a[10-i]=0;
        else
        a[10-i]=1;
        n=n/2;
    }
    a[9-p]=0;
    for(i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }


    return 0;
}
