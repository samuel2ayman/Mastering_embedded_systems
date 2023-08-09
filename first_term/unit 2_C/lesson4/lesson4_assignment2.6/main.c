#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c[10000],ch;
    int i ,sum=0;
    printf("enter a string :");
    gets(c);
    printf("enter the element to find frequency for : ");
    scanf("%c",&ch);
    for(i=0;c[i]!=0;i++)
    {
        if(ch==c[i])
        {
            sum++;
        }
    }
    printf("frequency of %c is %d",ch,sum);

    return 0;
}
