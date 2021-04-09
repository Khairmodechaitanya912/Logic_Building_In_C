#include<stdio.h>
#include<conio.h>

float Calculate_Bill(float iAmount)
{
    if(iAmount<=500)
    {
        printf("\n Here No Discount is APPLY...!!");
        return iAmount;
    }
    else if(iAmount<=1500&&iAmount>500)
    {
        return (iAmount-(iAmount*10)/100);

    }
    else if(iAmount>1500)
    {
        return (iAmount-(iAmount*15)/100);
    }

}
int main()
{
   float Total=0,Bret=0.0;

   printf("\n Enter Total Bill = ");
   scanf("%f",&Total);

   Bret=Calculate_Bill(Total);

   if(Bret>500)
   {
       printf("\n After Applying Discount your Total Bill is %.2f \n",Bret);
   }
   else
   {
       printf("\n Your Total Bill is %.2f \n",Bret);
   }

   getch();
   return 0;
}
