#include <stdio.h>
#include <stdlib.h>
void reverse();
int main()
{   char str;
    printf("enter a sentance : ");
    reverse();
    return 0;
}
void reverse()
{
char c;
scanf("%c",&c);
if(c!='\n')
{
   reverse();
   printf("%c",c);
}
}
