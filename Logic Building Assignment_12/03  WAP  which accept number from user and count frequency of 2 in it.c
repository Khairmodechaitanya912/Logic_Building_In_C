#include<stdio.h>
#include<conio.h>

int count_Two(int iNo)
{
  int i=0,Rem=0;

  if(iNo<0)
  {
      iNo=-iNo;
  }

  for(;iNo>0;iNo=iNo/10)
  {
    Rem=iNo%10;

    if(Rem==2)
    {
        i++;
    }
  }
  return i;
}

int main()
{
    int iValue=0;
    int bRet=0;

    printf("\n Enter Number = ");
    scanf("%d",&iValue);

    bRet=count_Two(iValue);

    printf("\n Count of 2 is = %d \n",bRet);

    getch();
    return 0;

}
