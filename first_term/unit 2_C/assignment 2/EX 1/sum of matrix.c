#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("enter the elements of 1st matrix :-\n");
    float a[2][2],b[2][2],c[2][2];
    int i,j;

        //getting the first matrix from user

    for(i=0;i<2;i++)
    {
           for( j=0; j<2;j++)
           {
               printf("enter [%d][%d]:",i,j);
               scanf("%f",&a[i][j]);
           }
    }

    //getting the second matrix from user

        printf("enter the elements of 2nd matrix :-\n");
        for(int i=0;i<2;i++)
        {
           for(int j=0; j<2;j++)
           {
               printf("enter [%d[%d]:",i,j);
               scanf("%f",&b[i][j]);
           }
        }

        //getting the sum matrix

        for(int i=0;i<2;i++)
        {
           for(int j=0; j<2;j++)
           {
               c[i][j]=a[i][j]+b[i][j];

           }
        }

        //printing the sum matrix

        printf("the sum  matrix is:  \n");
        for(int i=0;i<2;i++)
        {
           for(int j=0; j<2;j++)
            {

               printf("%0.2f \t",c[i][j]);
               if(j==1)
               {
                   printf("\n\n");
               }
            }
        }

    return 0;
}
