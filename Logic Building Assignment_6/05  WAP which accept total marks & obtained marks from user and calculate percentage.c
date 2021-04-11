#include<stdio.h>
#include<conio.h>

float Percentage(float iNo1,float iNo2)
{
    float per;

     per=(iNo2/iNo1)*100.0;

     return per;
}
int main()
{
    int iValue1=0,iValue2=0;
    float fRet=0.0;

    printf("\n Enter Total Marks = ");
    scanf("%d",&iValue1);

    printf("\n Enter Obtained Marks = ");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);

    printf("\n Your Percentage is %.2f %\n ",fRet);

    getch();
    return 0;
}
