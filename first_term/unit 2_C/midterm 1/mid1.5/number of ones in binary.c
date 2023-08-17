#include <stdio.h>
#include <stdlib.h>
int count(int n);
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    count(n);
    return 0;
}
int count(int n)
{
    int i,arr[16],c=0;
    printf(" the binary of %d",n);
    for (i=0;i<16;i++)
    {
    if(n%2==0)
    arr[i]=0;
    else
    arr[i]=1;
    n/=2;
    }
    for (i=0;i<10;i++)
    {
     if(arr[i]==1)
     c++;
    }
    printf("  is %d");
    for (i=0;i<10;i++)
    {
        printf("%d",arr[9-i]);
    }
    printf("  has %d ones",c);
}
