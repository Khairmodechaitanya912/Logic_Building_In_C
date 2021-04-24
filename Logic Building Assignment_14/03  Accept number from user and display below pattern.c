/*

     Input : 5
     Output : 1 * 2 * 3 * 4 * 5 *

*/

#include<stdio.h>
#include<conio.h>

void Pattern(int iNo)
{
    int i=0;

    printf("\n ");

    for(i=1;i<=iNo;i++)
    {

        printf(" %d * ",i);

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
