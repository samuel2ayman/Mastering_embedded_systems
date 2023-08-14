#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n[10],sum;
    int a ,i;

    //getting number of elements

    printf("enter the number of elements\n");
    scanf("%d",&a);
    printf("enter the numbers to find average\n");

    //getting numbers from user

    for(i=0;i<a;i++)
    {
        printf("element %d= ",i+1);
        scanf("%f",&n[i]);
    }
    for(i=0;i<a;i++)
    {
       sum+=n[i];
    }

    //printing the average

    printf("the average=%0.1f",sum/a);
    return 0;
}
