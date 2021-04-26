/*

        Input : iRow = 4 iCol = 4

        Output : A B C D
                 a b c d
                 A B C D
                 a b c d

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
    int i=0 , j=0 ;
    char Ch='\0';

    printf("\n");

    for(i=1;i<=iRow;i++)
    {
        for(Ch='A',j=1;j<=iCol;Ch++,j++)
        {
            if(i%2!=0)
            {
                printf(" %c ",Ch);
            }
            else
            {
                printf(" %c ",Ch+32);
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
