/*

      Input : iRow = 4 iCol = 3

      Output : * * *
               * * *
               * * *
               * * *

*/

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
    int i=0 , j=0;

    printf("\n");

    for(i=0;i<iRow;i++)
    {
        for(j=0;j<iCol;j++)
        {
            printf(" * ");
        }

        printf("\n");
    }

    return ;
}

int main()
{
    int iValue1=0 , iValue2=0;

    printf("\n Enter Number of Rows = ");
    scanf("%d",&iValue1);

    printf("\n Enter Number of Columns = ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    getch();
    return 0;

}
