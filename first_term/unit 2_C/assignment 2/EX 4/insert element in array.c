#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,i,e,l,s,a[10];
    printf("enter the number of elements : ");
    scanf("%d",&n);
printf("enter the numbers : ");
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("\n enter the number : ");
    scanf("%d",&s);

printf("\n enter location : ");
    scanf("%d",&l);

    a[l]=s;

    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

    return 0;
}
