#include <stdio.h>
#include <stdlib.h>
struct student
{
char name[10] ;
int roll;
float marks;
};
int main()
{
    struct student s[10] ;
    int i;
    printf("Enter information of students : \n");
    for (i=0;i<10;i++)
    {
        s[i].roll=i+1;
        printf("for roll number %d \n",s[i].roll);
        printf("Enter name : ");
        scanf("%s",&s[i].name);
        printf("Enter marks : ");
        scanf("%f",&s[i].marks);
        printf("\n");

    };
    printf("Displaying information of students : \n");
    for (i=0;i<10;i++)
    {
        printf("Information for roll number %d \n",s[i].roll);
        printf(" name :");
        puts(s[i].name);
        printf(" marks : %0.2f",s[i].marks);
        printf("\n");

    };
    return 0;
}
