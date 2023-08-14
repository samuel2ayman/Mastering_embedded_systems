#include <stdio.h>
#include <stdlib.h>
 int i,j;
int main()
{

    printf("Hello world!\n");
    for(i=0;i<10;i++)
    {
        for(j=i;j<10;++j)
        {
            printf("%d ",j);

        }
        printf("\n");

    }
    return 0;
}
