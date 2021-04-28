/*

            Input : iRow = 5 iCol = 5

            Output : a b c d e
                     1 2 3 4 5
                     a b c d e
                     1 2 3 4 5
                     a b c d e

*/

#include<stdio.h>
#include<conio.h>

void Pattern(int iRow , int iCol)
{
   int i=0 , j=0 , No=0 ;
   char Ch='\0' ;

   printf("\n");

   for(i=0;i<iRow;i++)
   {

       for(j=0;j<iCol;Ch++,No++,j++)
       {

           if(i%2==0)
           {

               if(j==0)
               {

                   Ch='a';

               }

               printf(" %c ",Ch);

           }

           else
           {
               if(j==0)
               {

                   No=1;

               }

               printf(" %d ",No);

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
