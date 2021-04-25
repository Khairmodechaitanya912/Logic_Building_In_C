/*


      Input : iRow = 3 iCol = 4

      Output : * # * #
               * # * #
               * # * #


*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
    int i=0 , j=0 ;

     printf("\n");

    for(i=0;i<iRow;i++)
    {

      for(j=0;j<iCol;j++)
        {
            if(j%2==0)
            {
                printf(" * ");
            }
            else
            {
                printf(" # ");
            }
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
