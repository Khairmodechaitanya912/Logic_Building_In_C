/*

         Input : iRow = 3 iCol = 5

         Output : A A A A A
                  B B B B B
                  C C C C C

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
   int i=0 , j=0 ;
   char Ch='\0';

   printf("\n");

   for(Ch='A',i=1;i<=iRow;Ch++,i++)
   {
       for(j=1;j<=iCol;j++)
       {
           printf(" %c ",Ch);
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
