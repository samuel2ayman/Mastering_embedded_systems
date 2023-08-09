#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[100],s,i;
    printf("enter the size of array :  ");
    scanf("%d",&s);
    printf("enter the array : " );
    for(i=0;i<s;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the array : ");

    for(i=0;i<s;i++)
    {
        printf("\t %d \t",arr[i]);
        if (i==s-1)
            printf("\n\n");
    }
     printf("the reversed array : ");
    for(i=1;i<=s;i++)
    {
        printf("\t %d \t",arr[s-i]);
    }


    return 0;
}
