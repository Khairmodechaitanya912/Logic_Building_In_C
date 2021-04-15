/*
Consider value of PI as 3.14. (Area = PI * Radius * Radius)

Input : 5.3
Output : 88.2026

*/

#include<stdio.h>
#include<conio.h>

double Circle_Area(float fRadius)
{
  float Area;

  Area=3.14*fRadius*fRadius;

  return Area;
}

int main()
{
  float fValue=0.0;
  double dRet=0.0;

  printf("\n Enter Radius = ");
  scanf("%f",&fValue);

  dRet=Circle_Area(fValue);

  printf("\n Area of Circle is %.4lf \n ",dRet);

  getch();
  return 0;
}
