#include <stdio.h>
#include <stdlib.h>
int prime(int n1,int n2);
int main()
{   int n1,n2;
    printf("Enter the first number n1 of range : ");
    scanf("%d",&n1);
    printf("Enter the second number n2 of range : ");
    scanf("%d",&n2);
    prime(n1,n2);
    return 0;
}
int prime(int n1,int n2)
{
    int i;

    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0&&i%3!=0||i==2||i==3)
        {
                        printf(" %d ",i);

        }


    }

}
