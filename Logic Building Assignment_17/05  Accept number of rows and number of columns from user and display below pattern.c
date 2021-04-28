/*

         Input : iRow = 4 iCol = 4

         Output : 1 2 3 4
                  2 3 4 5
                  3 4 5 6
                  4 5 6 7

 */

 #include<stdio.h>
 #include<conio.h>

 void Pattern(int iRow , int iCol)
 {
     int i,j ;

     printf("\n");

     for(int i = 0 ; i <= iRow - 1; i++)
    {
        for(int j = 1 ; j <= iCol ; j++)
        {
           printf(" %d ",i+j);
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
