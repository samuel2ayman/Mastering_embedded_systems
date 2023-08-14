#include <stdio.h>
#include <stdlib.h>
 int prime ();
int main()
{
    int n1 ,n2,i, f;
    printf("enter two numbers (interval) :");
    scanf(" %d %d ",&n1,&n2);
    printf("prime numbers between %d and %d : ",n1,n2);
    for(i=n1+1;i<n2;++i)
    {
        f=prime(i);
        if(f==0)
        printf("%d ",i);
    }
    return 0;
}
int prime (int num)
 {
    int j,f=0;
    for(j=2;j<=num/2;++j)
    {
        if(num%j==0)
        {
            f=1;
            break;
        }
    }
return f;
 }
