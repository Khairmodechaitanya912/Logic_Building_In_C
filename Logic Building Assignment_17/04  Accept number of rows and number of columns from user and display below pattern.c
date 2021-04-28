/*

         Input : iRow = 5 iCol = 5

         Output : 1  2  3  4  5
                 -1 -2 -3 -4 -5
                  1  2  3  4  5
                 -1 -2 -3 -4 -5
                  1  2  3  4  5

*/

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
    int i=0 , j=0 ;

    printf("\n");

    for(i=0;i<iRow;i++)
    {

        for(j=1;j<=iCol;j++)
        {

            if(i%2==0)
            {

               printf(" %3d ",j);

            }

            else
            {

                printf(" %3d ",-j);

            }

        }

        printf("\n");
    }

    return ;

}

int main()
{
    int iValue1=0 , iValue2=0 ;

    printf("\n Enter Number of Rows = ");
    scanf("%d",&iValue1);

    printf("\n Enter Number of Columns = ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    getch();
    return 0;

}
