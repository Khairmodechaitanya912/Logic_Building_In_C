/*
    (1 square feet = 0.0929 Square meter)

    Input : 5
    Output : 0.464515
*/


#include<stdio.h>
#include<conio.h>

double Square_Meter(int iNo)
{
    float Area=0.0;

    Area=iNo*0.0929;

    return Area;
}
int main()
{
    int iValue=0;
    double dRet=0.0;

    printf("\n Enter Area in Square  Feet = ");
    scanf("%d",&iValue);

    dRet=Square_Meter(iValue);

    printf("\n Area in Square Meter is %lf \n ",dRet);

    getch();
    return 0;
}
