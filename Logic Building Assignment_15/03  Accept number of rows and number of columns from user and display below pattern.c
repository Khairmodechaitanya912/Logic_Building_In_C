/*


         Input : iRow = 3 iCol = 5

         Output : 5 4 3 2 1
                  5 4 3 2 1
                  5 4 3 2 1


*/


void Pattern(int iRow , int iCol)
{
  int i=0 , j=0 ;

  printf("\n");

  for(i=1;i<=iRow;i++)
  {
      for(j=iCol;j>=1;j--)
      {
          printf(" %d ",j);
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
