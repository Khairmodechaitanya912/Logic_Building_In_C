#include<stdio.h>
#include<conio.h>

void Range_Display_Even(int iStart,int iEnd)
{
  int i=0;

  for(i=iStart;i<=iEnd;i++)
  {
      if(i%2==0)
      {
          printf("\n %d",i);
      }
  }

  printf("\n");

  return ;
}
int main()
{
    int iValue1=0,iValue2=0;

    up:

    printf("\n Enter Starting Point = ");
    scanf("%d",&iValue1);

    printf("\n Enter Ending Point = ");
    scanf("%d",&iValue2);

    if(iValue2<iValue1)
    {
        printf("\n Invalid Range...!!\n");
        goto up;
    }

    printf("\n In Given Range Even Numbers Are = \n");

    Range_Display_Even(iValue1,iValue2);

    getch();
    return 0;
}
