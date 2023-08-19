#include <stdio.h>
#include <stdlib.h>
#define samuel main
/*the word samuel will be replaced in preprocessing as it is macro
and when compiler start will find it main*/
int samuel()
{
    printf("Hello world!\n");
    return 0;
}
