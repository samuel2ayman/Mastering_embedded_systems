#include <stdio.h>
#include <stdlib.h>
int unique (int arr[],int n);
int main()
{
    int arr[100],i,n;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter the elements of array :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf ("the unique number is %d",unique(arr,n));
    return 0;
}
int unique (int arr[],int n)
{
    int c=0,i;
	for (i=0;i<n;i++)
		c ^=arr[i];
	return c;
}
