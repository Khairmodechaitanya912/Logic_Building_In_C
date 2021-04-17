#include<stdio.h>
#include<conio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char CValue)
{
   if(CValue=='A'||CValue=='a'||CValue=='E'||CValue=='e'||CValue=='I'||CValue=='i'||CValue=='O'||CValue=='o'||CValue=='U'||CValue=='u')
   {
       return TRUE;
   }
   else
   {
       return FALSE;
   }

   return ;
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("\n Enter Character = ");
    scanf("%c",&cValue);

    bRet=ChkVowel(cValue);

    if(bRet==TRUE)
    {
        printf("\n It is Vowel...!\n ");
    }
    else
    {
        printf("\n It is not Vowel...!\n ");
    }

    getch();
    return 0;
}
