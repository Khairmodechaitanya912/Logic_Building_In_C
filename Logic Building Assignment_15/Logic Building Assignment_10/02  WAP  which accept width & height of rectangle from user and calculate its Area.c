/*
   (Area = Width * Height)
   Input : 5.3 9.78
   Output : 51.834
*/

#include<stdio.h>
#include<conio.h>

double Rect_Area(float fWidth,float fHeight)
{
  float Area;

  Area=fWidth*fHeight;

  return Area;
}

int main()
{
    float fValue1=0.0,fValue2=0.0;
    double dRet=0.0;

    printf("\n Enter Width = ");
    scanf("%f",&fValue1);

    printf("\n Enter Height = ");
    scanf("%f",&fValue2);

    dRet=Rect_Area(fValue1,fValue2);

    printf("\n Area of Rectangle = %.4lf \n",dRet);

    getch();
    return 0;
}
