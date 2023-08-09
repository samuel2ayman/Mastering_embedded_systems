#include <stdio.h>
#include <stdlib.h>

int main()
{   int n,N,i,j,a[10],l;

    //getting number of elements from user

    printf("enter the number of elements : \n ");
    scanf("%d",&n);
    printf("enter the elements \n");

    //getting the elements from user

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    //the number to search for

    printf("enter the number to be searched : ");
    scanf("%d",&N);

    //search for the number and its location

    for (j=0;j<n;j++)
    {
        if(N==a[j])
        {
            l=j+1;
            printf("number %d found at location %d",N,l);

        }
    }
    return 0;
}
