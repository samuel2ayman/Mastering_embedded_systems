#include <stdio.h>
#include <stdlib.h>

int main()
{   int arr[100],i,n,s,in;
    printf("enter the size array : ");
    scanf("%d",&s);
    printf("enter the array : ");

    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the number to find index :");
    scanf("%d",&n);
    printf("the number is %d :",n);
    for(i=0;i<s;i++)
    {
        if(n==arr[i])
            in=i;
    }
printf(" its index is :%d ",i-1);
    return 0;
}
