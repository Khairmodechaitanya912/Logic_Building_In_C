#include<stdio.h>
#include<conio.h>

void Table(int iNo)
{
  int i=1,Tbl=0;

  if(iNo<0)
  {
      iNo=-iNo;
  }
  for(i=1;i<=10;i++)
  {
      Tbl=iNo*i;
      printf("\n %d",Tbl);
  }

  printf("\n");

  return ;
}
int main()
{
   int iValue=0;

   printf("\n Enter Number = ");
   scanf("%d",&iValue);

   Table(iValue);

   getch();
   return 0;
}
