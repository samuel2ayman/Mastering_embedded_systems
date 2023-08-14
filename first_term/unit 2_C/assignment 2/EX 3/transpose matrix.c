#include <stdio.h>
#include <stdlib.h>

int main()
{ int  m[10][10],t[10][10],r,c,i,j;


    //taking number of rows and columns from user

    printf("enter the number of rows: ");
    scanf("%d",&r);
    printf("enter the number of columns : ");
    scanf("%d",&c);

    //taking the matrix from user


    printf("enter the elements of matrix to transpose\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the elenent [%d][%d]",i,j);
            scanf("%d",&m[i][j]);
        }
    }

        //displaying the matrix

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
         printf("%d \t",m[i][j]);
         if(j==c-1)
         {
             printf("\n\n");
         }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            t[j][i]=m[i][j];
        }
    }

    printf("\n the transposed matrixis :\n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
         printf("%d \t",t[i][j]);
         if(j==r-1)
         {
             printf("\n\n");
         }
        }
    }
    return 0;
}
