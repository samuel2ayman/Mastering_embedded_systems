#include <stdio.h>
#include <stdlib.h>

int main()
{   char c ;
    printf(" enter the character to check\n");
    scanf("%c",&c);
    if (c>'a'&&c<'z')
    {
        printf("%c is an alphabet",c);
    }
    else
        {
        printf("%c is not an alphabet",c);
        }
    return 0;
}
