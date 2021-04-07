#include<stdio.h>
#include<conio.h>

void Display_Convert(char CValue)
{
    if(CValue>='a'&&CValue<='z')
    {
        printf("\n its converted is = %c \n",CValue-32);
    }
    else if(CValue>='A'&& CValue<='Z')
    {
        printf("\n its converted is = %c \n",CValue+32);
    }
}
int main()
{
   char cValue='\0';

   printf("\n Enter Character = ");
   scanf("%c",&cValue);

   Display_Convert(cValue);

   getch();
   return 0;
}
