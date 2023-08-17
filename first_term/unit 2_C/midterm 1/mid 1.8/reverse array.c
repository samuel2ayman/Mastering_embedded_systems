#include <stdio.h>
#include <stdlib.h>
int reverse(int n);
int main()
{

    int N;
    printf("Enter number of elements in array : ");
    scanf("%d",&N);
    printf("Enter elements of array : ");
    reverse(N);
    return 0;
}
int reverse(int n)
{
    int i,arr[n],arr2[n];
    for ( i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   for ( i=0;i<n;i++)
   {

       arr2[i]=arr[n-i-1];
   }
    for ( i=0;i<n;i++)
        {
            printf(" %d ",arr2[i]);
        }
}
