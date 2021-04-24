/*

   Input : 8
   Output : 2 4 6 8 10 12 14 16

*/


#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i=0;

    printf("\n ");

    for(i=1;i<=iNo*2;i++)
    {
       if(i%2==0)
       {

            printf(" %d ",i);

       }
    }

    printf("\n ");
}

int main()
{
    int iValue=0;

    printf("\n Enter The Number of Elements = ");
    scanf("%d",&iValue);

    Pattern(iValue);

    getch();
    return 0;

}
