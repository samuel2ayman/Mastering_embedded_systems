#include <stdio.h>
#include <stdlib.h>
int po (int n1,int n2);
int main()
{
    int n,p;
    printf("enter the base number : ");
    scanf("%d",&n);
    printf("enter the power number (positive integer) : ");
    scanf("%d",&p);
    printf("%d ^ %d = %d ",n,p,po(n,p));

    return 0;
}

int po (int n,int p)
{

    if(p!=0)
    return (n*po(n,p-1));
    else
    return 1;
}
