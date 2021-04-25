/*

     Input : iRow = 3 iCol = 4

     Output : 1 1 1 1
              2 2 2 2
              3 3 3 3

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
            printf(" %d ",i);
        }

        printf("\n");
    }
}

int main()
{
    int ivalue1=0 , ivalue2=0 ;

    printf("\n Enter Number of Rows = ");
    scanf("%d",&ivalue1);

    printf("\n Enter Number of Columns = ");
    scanf("%d",&ivalue2);

    Pattern(ivalue1 , ivalue2);

    getch();
    return 0;

}
