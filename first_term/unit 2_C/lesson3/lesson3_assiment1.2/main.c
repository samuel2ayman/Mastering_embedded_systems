#include <stdio.h>
#include <stdlib.h>

int main()
{   char a ;
    printf("enter the alphabet to check \n");
    scanf("%c",&a);
    if (a==-'a'||a=='e'||a=='i'||a=='o'||a=='u')
{
    printf("the alphabet %c is vowel",a);
}


    else
{


       printf("the alphabet %c is conesant",a);

}
    return 0;
}
