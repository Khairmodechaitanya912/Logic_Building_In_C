/*

       Input : iRow = 5 iCol = 5

       Output : 2 4 6 8 10
                1 3 5 7 9
                2 4 6 8 10
                1 3 5 7 9

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iRow ,int iCol)
{
   int i=0 , j=0 , No=0 ;

   printf("\n");

   for(i=0;i<iRow;i++)
   {

       for(j=0;j<iCol;j++,No=No+2)
       {

           if(i%2==0)
           {

               if(j==0)
               {

                   No=2;

               }


               printf(" %-3d ",No);

           }

           else
           {

               if(j==0)
               {

                   No=1;

               }

               printf(" %-3d ",No);
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
