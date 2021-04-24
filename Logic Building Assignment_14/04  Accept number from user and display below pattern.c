/*

    Input : 4
    Output : # 1 * # 2 * # 3 * # 4 *

*/

void Pattern(int iNo)
{
    int i=0;

    printf("\n ");

    for(i=1;i<=iNo;i++)
    {

        printf(" #  %d  * ",i);

    }

    printf("\n ");

    return 0;
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
