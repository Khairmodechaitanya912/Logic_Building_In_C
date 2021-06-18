/*

 (1 celsius = (Fahrenheit -32) * (5/9))

    Input : 10
    Output : -12.2222 (10 - 32) * (5/9)

*/

#include<stdio.h>
#include<conio.h>

double Fh_to_Cs(float fTemp)
{
    float Cel=0.0;

    Cel=(fTemp-32)*(0.555);

    return Cel;
}
int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("\n Enter Temperature in Fahrenheit = ");
    scanf("%f",&fValue);

    dRet=Fh_to_Cs(fValue);

    printf("\n Temperature in Celsius = %.4lf \n", dRet);

    getch();
    return 0;
}
