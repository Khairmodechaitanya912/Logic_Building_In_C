/*

         Input : iRow = 4  iCol = 4

         Output : 1 2 3 4
                  5 6 7 8
                  9 1 2 3
                  4 5 6 7

*/

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
  int i=1 , j=1 , No=1 ;

   printf("\n");

  for(i=1;i<=iRow;i++)
  {
      for(j=1;j<=iCol;j++,No++)
      {
          if(No>9)
          {
              No=1;
          }

          printf(" %d ",No);
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
