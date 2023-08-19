#include <stdio.h>
#include <stdlib.h>
struct student_inf
{
    char Name[10];
    int  Roll;
    float Mark;
};
int main()
{
    struct student_inf x;
    printf("Enter the student information :- \n ");
    printf("Enter name : ");
    scanf("%s",&x.Name);
    printf("Enter Roll : ");
    scanf("%d",&x.Roll);
    printf("Enter Mark : ");
    scanf("%f" ,&x.Mark);
    printf("Displaying information: \n");
    printf("Name : %s \n",x.Name);
    printf("Roll : %d \n",x.Roll);
    printf("Marks : %0.2f \n",x.Mark);

    return 0;
}
