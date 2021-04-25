/*

     Input : iRow = 4 iCol = 3

     Output : 1 2 3
              1 2 3
              1 2 3
              1 2 3

*/

void Pattern(int iRow , int iCol)
{
    int i=0 , j=0 ;

    printf("\n");

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            printf(" %d ",j);
        }

        printf("\n");
    }

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
