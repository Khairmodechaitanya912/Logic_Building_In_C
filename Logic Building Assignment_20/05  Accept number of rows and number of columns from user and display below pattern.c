/*

        Input : iRow = 5  iCol = 5

        Output : 1 2 3 4 5
                 1 2     5
                 1   3   5
                 1     4 5
                 1 2 3 4 5

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{

    int i=0 , j=0 ;

    printf("\n");

    for(i=1;i<=iRow;i++)
    {

        for(j=1;j<=iCol;j++)
        {

            if(i==1||i==iRow||j==1||j==iCol||i==j)
            {

                printf(" %d ",j);

            }

            else
            {

                printf("   ");

            }

        }

        printf("\n");

    }

    return ;

}

int main()
{

    int iValue1=0 , iValue2=0 ;

    printf("\n Enter Number Of Rows = ");
    scanf("%d",&iValue1);

    printf("\n Enter Number Of Columns = ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    getch();
    return 0;

}
