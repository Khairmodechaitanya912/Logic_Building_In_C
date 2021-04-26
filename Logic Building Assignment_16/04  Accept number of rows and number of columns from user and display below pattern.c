/*

        Input : iRow = 4 iCol = 5

        Output : 4 4 4 4 4
                 3 3 3 3 3
                 2 2 2 2 2
                 1 1 1 1 1

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
  int i=0 , j=0 ;

  printf("\n");

  for(i=iRow;i>=1;i--)
  {
      for(j=1;j<=iCol;j++)
      {
          printf(" %3d ",i);
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
