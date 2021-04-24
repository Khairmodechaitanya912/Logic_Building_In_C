/*

     Input : 5
     Output : 5 # 4 # 3 # 2 # 1 #

*/
#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{

   printf("\n ");

   for(;iNo>0;iNo--)
   {
       printf(" %d  #  ",iNo);
   }

   printf("\n ");

   return ;
}

int main()
{
    int iValue=0;

    printf("\n Enter the Number of Elements = ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;
}
