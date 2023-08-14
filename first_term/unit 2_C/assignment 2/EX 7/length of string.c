#include <stdio.h>
#include <stdlib.h>
/* program to determine length of string without strln*/
int main()
{   char a[100];
    int sum,i;
    printf("enter a string : ");
    scanf("%s",&a);
    for(i=0;a[i]!='\0';i++);
    printf("length of string : %d",i);

    return 0;
}
