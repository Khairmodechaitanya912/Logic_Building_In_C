/*

         Input : iRow = 4 iCol = 4

         Output : * * * *
                  * * *
                  * *
                  *

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

            if(j<=(iCol-i+1))
            {

                printf(" * ");

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
