#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
   int i=1,j=1;

   if(iNo<0)
   {
       iNo=-iNo;
   }

   for(i=1;i<=iNo;i++)
   {
       printf(" * ");
   }

   for(j=1;j<=iNo;j++)
   {
       printf(" # ");
   }

   printf("\n");

   return ;
}

int main()
{
    int iValue=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    printf("\n");

    Display(iValue);

    getch();
    return 0;
}
